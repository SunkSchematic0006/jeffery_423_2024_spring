#include <stdio.h>
#include "tac.h"

void addrprint(struct addr a)
{
   if (a.region == R_NAME)
      printf("%s", a.u.name);
   else
      printf("%s:%d", regionname(a.region), a.u.offset);
}


void tacprint(struct instr *ip)
{
   if (ip == NULL) return;
   if (ip->opcode < D_GLOB) { /* write a regular instruction */
      printf("\t%s", opcodename(ip->opcode));
      }
   else { /* write a pseudo-instruction */
      printf("%s", pseudoname(ip->opcode));
   }
   if (ip->dest.region != R_NONE) {
      printf(" ");
      addrprint(ip->dest);
      }
   if (ip->src1.region != R_NONE) {
      printf(",");
      if ((ip->opcode == D_PROC) || (ip->opcode == O_CALL))
         printf("%d", ip->src1.u.offset);
      else
	 addrprint(ip->src1);
      }
   if (ip->src2.region != R_NONE) {
      printf(",");
      if (ip->opcode == D_PROC) printf("%d", ip->src2.u.offset);
      else
      addrprint(ip->src2);
      }
   printf("\n");
   tacprint(ip->next);
}

int main()
{
   /* allocate a single node, for the first instruction */
   struct addr no_addr = { R_NONE, 0 };
   struct addr a[11] = {R_LOCAL, 0,
			R_CONST, 5,
			R_LOCAL, 8,
			R_CONST, 1,
                        { R_LOCAL, .u = { .offset=16} },
                        { R_LOCAL, .u = { .offset=24} },
			   { R_NAME, .u = {.name="write"} },
			   { R_NAME, .u = {.name="main"} },
				R_CONST, 0,
				R_CONST, 32,
   };


   struct instr *i1 = gen(D_PROT, a[6], no_addr, no_addr);
   struct instr *i2 = gen(D_PROC, a[7], a[8], a[9]);

   struct instr *i3 = gen(O_ASN, a[0], a[1], no_addr);
   struct instr *i4 = gen(O_MUL, a[2], a[0], a[0]);
   struct instr *i5 = gen(O_ADD, a[4], a[2], a[3]);

   struct instr *i6 = gen(O_ASN, a[0], a[4], no_addr);
   struct instr *i7 = gen(O_PARM, a[0], no_addr, no_addr);

   struct instr *i8 = gen(O_CALL, a[6], a[3], a[5]);
   struct instr *i9 = gen(O_RET, no_addr, no_addr, no_addr);

   struct instr *L, *L2, *L3;
   L = concat(i1, i2);
   L2 = concat(i3, i4);
   L3 = concat(L, L2);

   L3 = concat(L3, 
      concat(concat(concat(i5, i6), concat(i7, i8)), i9));

   tacprint(L3);

   return 0;
}
