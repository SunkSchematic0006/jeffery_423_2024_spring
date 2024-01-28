int fib(int n)
{
   if (n < 2) return 1;
   return fib(n-2) + fib(n-1);
}

int main()
{
   int c, sum;
   sum = 0;
   printf("Enter a number ");
   c = getchar();
   while ('0' <= c && c <= '9') { sum = sum * 10 + c-'0'; c = getchar(); }
   printf("fib(%d) = ", sum);
   printf("%d\n", fib(sum));
   return 0;
}
