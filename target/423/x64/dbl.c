#include <iostream>
using namespace std;
const double d2 = 2.71;

int main()
{
   double d;
   d = 3.1415;
   long l = *(long *)(&d);
   cout << "$" << l << endl;
}
