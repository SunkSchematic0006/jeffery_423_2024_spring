struct token {
   int category;
   char *text;
   int linenumber;
   int column;
   char *filename;
   union {
      int ival;
      double dval;
      char rval;
      char *sval;
   } value;
};

struct token *alctoken(int cat, char *text, int ln, int col, char *fn);
