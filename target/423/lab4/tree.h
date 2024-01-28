struct tree {
   int prodrule;
   char *symbolname;
   int nkids;
   struct token *leaf;   /* if nkids == 0; NULL for ε productions */
   struct tree *kids[1]; /* if nkids >0 */
};
