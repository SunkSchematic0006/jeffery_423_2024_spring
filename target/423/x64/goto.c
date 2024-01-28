#include <stdlib.h>

long f(long i, long j) {
long m = (i <= 12L);
   if (m) goto L2;
   m = i * j;
   goto L3;
 L2:
   return -1;
 L3:
   return 0;
}

int main() {
   f(5, 3);
   }
