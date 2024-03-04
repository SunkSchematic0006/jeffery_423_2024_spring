struct tree {
   int prodrule;
   char *symbolname;
   int nkids;
   struct token *tok;
   struct tree *kids[10];
   };
