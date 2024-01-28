#include <stdlib.h>


int f(int i) {
int y = 5;
int *m = &y;
   return *m;
}

int main() {
   f(5);
   }
