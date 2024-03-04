#include <stdlib.h>
struct foo { long x, y, z; };

long f(struct foo *o) {
long l;
   o->x = o->y + o->z;
l = 5;
   return l;
}

int main() {
   struct foo *o = malloc(sizeof(struct foo));
   f(o);
   }
