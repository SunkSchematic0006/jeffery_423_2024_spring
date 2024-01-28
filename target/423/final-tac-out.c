int fib(char par[4]){
	char loc[32]; int parbase = 28;
	*(int *)(loc+4) = (*(int *)(par+0) <= 1);
	if ( *(int *)(loc+4) ) goto L0;
	goto	L1;
L0:
	return	1;
L1:
	*(int *)(loc+8) = *(int *)(par+0) - 1;
	*(int *)(loc+parbase+0) = *(int *)(loc+8);
	*(int *)(loc+12) = fib(loc+parbase);
	*(int *)(loc+16) = *(int *)(par+0) - 2;
	*(int *)(loc+parbase+0) = *(int *)(loc+16);
	*(int *)(loc+20) = fib(loc+parbase);
	*(int *)(loc+24) = *(int *)(loc+12) + *(int *)(loc+20);
	return	*(int *)(loc+24);
}
	/*	"final-tac 0.1" */
