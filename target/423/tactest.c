#include <stdio.h>

extern int fib(char *);
int main()
{
   int x = 5;
   int i = fib((char *)&x);
   printf("fib(%d) is %d\n",x,i);
   return 0;
   }
