struct { double x, y, z; } x;
struct { double x, y, z; } y;

typedef int foo;

int a;
foo b;

int main()
{
    b=a;
}
