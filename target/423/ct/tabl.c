/*
 * tabl.c - example uses of ct's table type
 * This one will not compile with gcc.
 */
int main()
{
   int i;
/* actual */
   table t, t2;
/* generated
   struct table *t = maketable(), *t2 = maketable();
 */
   t["Mitt"] = "4";
   t["Glove"] = "5";
   t["Gauntlet"] = "8";
   printf("The word 'Glove' has %s characters\n", t["Glove"]);
   t2[2] = "tennis";
   t2[9] = "baseball";
   t2[0] = "Mitt";
   printf("Hey, Darth %s\n", t[t2[0]]);
   return 0;
}
