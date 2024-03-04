#include <stdio.h>

int main()
{
   double a, b, c, d, e, f, g;
   a = 1.1; b = 2.2; c = 3.3; d = 4.4; e = 5.5; f = 6.6; g = 7.7;
   a = ((a+b)*(c+d))+(((e+f)*(g+a))/(c*e));
   printf("a is %g\n", a);
}
