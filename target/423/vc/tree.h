struct tree {
   int prodrule;
   char *nonterm;
   int nkids;
   union {
      struct token *leaf;
      struct tree *kids[1];
      } u;
};

struct tree *tree(int rule, char *nonterm, int nkids, ...);
