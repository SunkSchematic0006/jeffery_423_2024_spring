#include <stdio.h>
#include <stdlib.h>
#include "type.h"
#include "symtab.h"
#include "token.h"
#include "cgram.tab.h"
   
struct typeinfo null_type = { NULL_TYPE };
struct typeinfo integer_type = { INT_TYPE };
struct typeinfo double_type = { DOUBLE_TYPE };

typeptr null_typeptr = &null_type;
typeptr integer_typeptr = &integer_type;
typeptr double_typeptr = &double_type;

char *typenam[] =
   {"none", "int", "class", "list", "float", "func", "dict", "bool",
    "string", "package", "any"};

typeptr alctype(int base)
{
   typeptr rv;
   if (base == NULL_TYPE) return null_typeptr;
   else if (base == INT_TYPE) return integer_typeptr;
   else if (base == DOUBLE_TYPE) return double_typeptr;
   else if (base == CHAR_TYPE) return char_typeptr;

   rv = (typeptr) calloc(1, sizeof(struct typeinfo));
   if (rv == NULL) return rv;
   rv->basetype = base;
   return rv;
}

/* mebbe list size determination from a tree nodeptr is still reasonable? */
typeptr alclist()
{
   typeptr rv = alctype(LIST_TYPE);
   return rv;
}



typeptr alcstructtype()
{
   typeptr rv = alctype(STRUCT_TYPE);
   /* who initializes the fields, someone else I guess, later on */
   return rv;
}

/* in order for this to make any sense, you have to pass in the subtrees
 * for the return type (r) and the parameter list (p), but the calls to
 * to this function in the example are just passing NULL at present!
 */
typeptr alcfunctype(struct tree * r, struct tree * p, SymbolTable st)
{
   typeptr rv = alctype(FUNC_TYPE);
   if (rv == NULL) return NULL;
   rv->u.f.st = st;
   /* fill in return type and paramlist by traversing subtrees */
   /* rf->u.f.returntype = ... */
   return rv;
}

char *typename(typeptr t)
{
   if (!t) return "(NULL)";
   else if (t->basetype < FIRST_TYPE || t->basetype > LAST_TYPE)
      return "(BOGUS)";
   else return typenam[t->basetype-1000000];
}
