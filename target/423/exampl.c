   f( "hello" )
   g ( " world")


----------------------


char globals [ ...] = {... };

char constants [ ... ] = { 'h', 'e', 'l', 'l', 'o', '\0', ' ', 'w', 'o', ... } ;

int foo()
{
char locals[32];


L:	*(int *)(locals+4) = 4 * *(int *)(locals+0);
	t2 = a[t1];
	t3 = 4 * i;
	t4 = b[t3];
	t5 = t2 * t4;
	t6 = prod + t5;
	t7 = i + 1;
	i = t7;
	if (i <= 20) goto L;
}
