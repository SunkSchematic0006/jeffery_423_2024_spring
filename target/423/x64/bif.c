#include <stdlib.h>

long f(long i, long j) {
long m = (i <= 12L);
   if (m) goto L2;
   return m;
 L2:
   return -1;
}

int main() {
   f(5, 3);
   }
