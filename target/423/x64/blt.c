#include <stdlib.h>

long f(long i, long j) {
   if (i<=j) goto L2;
   return i;
 L2:
   return -1;
}

int main() {
   f(5, 3);
   }
