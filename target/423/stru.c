struct foo { int x; double y; } x;
typedef struct foo y;
y z;
int main()
{
   x.x = 1; x.y = 3.14;
   z = x;
   return 0;
}
