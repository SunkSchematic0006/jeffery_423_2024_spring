package main
// void f(int)
// The call to f() below will be an error unless a definition of f()
// is provided by one of the other files named on the g0 command line.

int y

void main()
{
   int x = 6
   y = 6
   f(x)
   write( "x should be 7; it is "  x )
}
