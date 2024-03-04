#include <stdio.h>
extern long fib(long);

int main()
{
   int i;
   i = fib(6);
   printf("fib(6) was what? %d\n", i);
}
