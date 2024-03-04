#include <stdio.h>

#define nBuckets 43

int hash(char *s)
{
   register int h = 0;
   register char c;
   while (c = *s++) {
      h += c & 0377;
      h *= 37;
      }
   if (h < 0) h = -h;
   return h % nBuckets;
   }

int main()
{
printf("xyz %d\n", hash("xyz"));
printf("x %d\n", hash("x"));
printf("x1 %d\n", hash("x1"));
printf("x2 %d\n", hash("x2"));

   }
