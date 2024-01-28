struct token {
  int cat;
  char *text; /* ... */
};
struct token *mktoken(int);
char *catname(int);
extern struct token *yytoken;
