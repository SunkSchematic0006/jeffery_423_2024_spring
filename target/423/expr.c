#include <stdio.h>

int main()
{
   long a, b, c, d, e, f, g;
   a = 1; b = 2; c = 3; d = 4; e = 5; f = 6; g = 7;
   a = ((a+b)*(c+d))+(((e+f)*(g+a))/(c*e));
   printf("a is %d\n", a);
}
