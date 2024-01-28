#include <stdio.h>

long f(long,long,long);

int main()
{
   long rv = f(1, 2, 3);
   printf("rv is %ld\n", rv);
}

long f(long a, long b, long c)
{
   long d, e, f, g;
   d = 4; e = 5; f = 6; g = 7;
   a = ((a+b)*(c+d))+(((e+f)*(g+a))/(c*e));
   return a;
}
