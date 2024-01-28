/* graph.c
 * Alex McNurlin
 * mcnu5088@vandals.uidaho.edu
 * Created for University of Idaho CS445
 * Hacked by Jeffery
 * You'll have to hack this up further to make it work with your structures.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/* #include "tree.h" */

extern char* pretty_print_name(int prodrule);

$ifdef NOTDEF
  This is the tree/token definition used. To the extent your tree is different
  you will need to adjust the code below.

typedef struct token {
   int category;   /* the integer code returned by yylex */
   char *text;     /* the actual string (lexeme) matched */
   int lineno;     /* the line number on which the token occurs */
   char *filename; /* the source file in which the token occurs */
   int ival;       /* for integer constants, store binary value here */
   double dval;    /* for real constants, store binary value here */
   char *sval;     /* for string constants, malloc space, de-escape, store */
   } Token;
    
typedef struct tree {
   int prodrule;
   int nChildren;
   struct tree** children;
   struct token* leaf;
   } Tree;
$endif

void graph_print_branch(FILE* file, struct tree* tr);
void graph_print_branch_simple(FILE* file, struct tree* tr);
void graph_print_leaf(FILE* file, struct tree* tr);
void graph_print_leaf_simple(FILE* file, struct tree* tr);

/*
 * Prints the tree.
 * Also produces a parse_tree_full.dot and parse_tree_simple.dot that
 * can be used by graphviz to generate a visual representation of the
 * parse tree.
 *
 * Compile these with the following commands
 *
 *     sed -i parse_tree_simple.dot -e "s/\"\"/\"\\\"/g"
 *     sed -i parse_tree_simple.dot -e "s/[()]//g"
 *     dot -Tpng parse_tree_simple.dot -o graph_simple.png
 *
 *     sed -i parse_tree_full.dot -e s/\"\"/\"\\\"/g
 *     sed -i parse_tree_full.dot -e "s/[()]//g"
 *     dot -Tpng parse_tree_full.dot -o graph_full.png
 *
 * Note: due to limitations with escaping characters, the .dot files won't
 *     work if you have double quoted strings in the grammar
 */

FILE *graph_file_full;
FILE *graph_file_simple;
int j;

void print_graph(Tree* t, int depth) {
   int i;
   if (graph_file_full == NULL) {
      if ((graph_file_full = fopen("parse_tree_full.dot", "w")) == NULL) {
	 fprintf(stderr, "cannot open %s for writing\n",
		 "parse_tree_full.dot");
	 fflush(stderr);
	 exit(1);
	 }
      
      if ((graph_file_simple = fopen("parse_tree_simple.dot", "w")) == NULL) {
	 fprintf(stderr, "cannot open %s for writing\n",
		 "parse_tree_simple.dot");
	 fflush(stderr);
	 exit(1);
	 }
      fprintf(graph_file_full, "digraph {\n");
      fprintf(graph_file_simple, "digraph {\n");
      }
   if (t == NULL) {
      fprintf(graph_file_full, "N%p%i [label=\"%s\"];\n", t, j, "Empty rule");
      fprintf(graph_file_simple, "N%p%i [label=\"%s\"];\n", t, j,"Empty rule");
      j++;
      return;
      }
   else if (t->prodrule == 0) {
      graph_print_leaf(graph_file_full, t);
      graph_print_leaf_simple(graph_file_simple, t);
      return;
      }

   graph_print_branch(graph_file_full, t);
   graph_print_branch_simple(graph_file_simple, t);
   for(i=0; i<t->nChildren; i++) {
      if (t->children[i] != NULL) {
         fprintf(graph_file_full, "N%p -> N%p;\n", t, t->children[i]);
         fprintf(graph_file_simple, "N%p -> N%p;\n", t, t->children[i]);
         }
      else {
         fprintf(graph_file_full, "N%p -> N%p%i;\n", t, t->children[i], j);
         fprintf(graph_file_simple, "N%p -> N%p%i;\n", t, t->children[i], j);
         }
      print_graph(t->children[i], depth+1);
      }
   if (depth == 0) {
      fprintf(graph_file_full, "}");
      fprintf(graph_file_simple, "}");
      }
}

void graph_print_leaf_simple(FILE* file, struct tree* tr) {
   fprintf(file, "N%p [shape=box label=\"%s\"];\n", tr, tr->leaf->text);
}

void graph_print_branch_simple(FILE* file, struct tree* tr) {
   fprintf(file, "N%p [label=\"%s\"];\n", tr, pretty_print_name(tr->prodrule));
}

void graph_print_leaf(FILE* file, struct tree* tr) {
   struct token* t = tr->leaf;
   fprintf(file, "N%p -> N%p [style=dotted]\n", tr, tr->leaf);
   graph_print_branch(file, tr);
   fprintf(file, "N%p [shape=box style=dotted label=\" struct* leaf @ %p \\n\\l int category = %i \\l char *text = %s \\l int lineno = %i \\l char *filename = %s \\l int ival = %i \\l double dval = %lg \\l char *sval = %s \\l\"];\n",
           t, t, t->category, t->text, t->lineno,
           t->filename, t->ival, t->dval, t->sval);
}

void graph_print_branch(FILE* file, struct tree* tr) {
   fprintf(file, "N%p [shape=box label=\"struct* tree @ %p\\n\\l int prodrule = %i \\\"%s\\\" \\l int nChildren =  %i \\l struct tree** children =  %p \\l struct token* leaf %p\\l\"];\n",
           tr, tr, tr->prodrule, pretty_print_name(tr->prodrule),
           tr->nChildren, tr->children, tr->leaf);
}
