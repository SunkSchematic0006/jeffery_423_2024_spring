/*
 * E1.type = E2.type PLUS E3.type
 * E1.type = E2.type MINUS E3.type
 * E1.type = E2.type MUL E3.type
 * E1.type = E2.type DIV E3.type
 * E1.type = E2.type MOD E3.type
 * ....all binary ops in c113c
 * ....all unary ops in c113c
 */



struct typeinfo *check_types(int OP, struct typeinfo *left,
			     struct typeinfo *right)
{
   switch(OP) {
   case PLUS: {
      if (left->basetype == INT && right->basetype == INT){
	 return left;
	 }
      else if (left->basetype == DOUBLE && right->basetype == DOUBLE){
	 return left;
	 }
      else if (left->basetype == INT && right->basetype == DOUBLE){
	 return left;
	 }
      else {
	 semantic_error(....);
	 }
      }
   case MOD: { /* not defined on double, for example */
      break;
      }
      }
}
