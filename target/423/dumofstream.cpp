#include "dumofstream.h"
#include <stdlib.h>
   _120_ofstream::_120_ofstream(int i)
   { if (i == 1) f = stdout;
     else { fprintf(stderr, "bad ofstream initializer\n"); exit(1); }
   }

void _120_ofstream::out_str(char *s) { fprintf(f,"%s",s); }
void _120_ofstream::out_long(long l) { fprintf(f,"%d",l); }
void _120_ofstream::out_double(double d) { fprintf(f,"%g",d); }
