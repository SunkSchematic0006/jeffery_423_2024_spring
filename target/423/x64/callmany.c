#include <stdlib.h>

long f(long i, long j, long k, long l, long m, long n, long o, long p) {
   return i * j * k * l * m * n * o * p;
}

int main() {
long a = 2L;
   f(5L, 3L, a, 5 * 3L, 3 * a, 6L, 7L, 8L);
   }
