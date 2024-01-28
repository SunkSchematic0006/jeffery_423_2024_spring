int treeprint(struct tree *t, int depth)
{
  int i;

  printf("%*s %s: %d\n", depth*2, " ", humanreadable(t->prodrule), t->nkids);
  
  for(i=0; i&lt;t-&gt;nkids; i++)
    treeprint(t->kids[i], depth+1);

}

int symbol_inserter(struct tree *t, struct symboltable *ST)
{
  int i;

  /* look for a point at which IDENTIFIER really implies some symbol
   * that I have to insert */
  switch (t->prodrule) {
  case INIT_DECLARATOR_RULE_1: {
/* choice of either:
     if (t->child[0]->prodrule == IDENTIFIER_RULE_1){
     }
     
     insert_helper(t->child[0], ST)
     break;
     }
  case INIT_DECLARATOR_RULE_2: {
     break;
     }
  default:
     /* then I get to do some special stuff related to symbol insertion */
     }
  
  for(i=0; i<t->nkids; i++)
    symbol_inserter(t->kids[i], ST);

}
