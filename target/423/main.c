#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "tree.h"
#include "cgram.tab.h"
#include "symtab.h"

extern FILE *yyin;
extern int yyparse();
int errors;
FILE *outfile;
char *CurFileName;
extern int yydebug;
struct tree *root;
extern void print_graph(struct tree *, char *);
extern void printsyms(struct tree *);
extern void printtree(struct tree *, int);

char *yyname(int);

int main(int argc, char **argv)
{
   int rv;
   char cmdline[128];
   outfile = stdout;
   CurFileName = argv[1];
   yydebug = 1;

//   sprintf(cmdline, "cpp %s", argv[1]);
//   if ((yyin = popen(cmdline, "r")) == NULL){
   sprintf(cmdline, "%s", argv[1]);
   if ((yyin = fopen(argv[1], "r")) == NULL){
      fprintf(stderr, "can't open %s\n", cmdline);
      exit(1);
      }
   rv = yyparse();
   globals = new_st(101);
#if 0
   /* ... insert predefined symbols */
   if (stdin_h_was_included)
     insert_st(globals, "printf");
#endif
   if (root != NULL) {
      char buf[128], buf2[256];
      sprintf(buf, "%s.dot", argv[1]);
      print_graph(root, buf);
      sprintf(buf2, "dot -Tpng %s >%s.png", buf, argv[1]);
      system(buf2);
      printtree(root, 0);
      assign_first(root);
      assign_follow(root);
      assign_onTrue(root);
      assign_onFalse(root);
      }
   return rv;
}
