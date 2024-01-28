#include <stdio.h>

void f(int a[], int j) {

//  int y = 11;

/* long way of saying a[3] = 11; */
  int *p = a+j;
  *p = 11;

   return ;
}

int main() {
  int a[12];
   f(a, 3);
  printf("%d\n", a[3]);
   }
