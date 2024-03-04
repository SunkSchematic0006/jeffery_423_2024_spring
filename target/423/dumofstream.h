#include <stdio.h>
class _120_ofstream {
private:
   FILE *f;
public:
   _120_ofstream(int i);
   void out_str(char *s);
   void out_long(long l);
   void out_double(double d);
};
