#include <stdio.h>
long x, y, z;
int main()
{
   y = 2; z = 3;
   x = y % z;
   while (x == 1)
      printf("x is %ld\n", x);
   return 3;
}
