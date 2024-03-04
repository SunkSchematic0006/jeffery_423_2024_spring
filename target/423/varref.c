#include <stdio.h>
int main()
{
   int x=2;
   int y = x + x + (x = x + 1) + x;
   printf("y %d\n", y);
}
