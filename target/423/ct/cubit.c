int main()
{
   int c, sum;
   sum = 0;
   printf("Enter a number ", "");
   c = getchar();
   while ('0' <= c && c <= '9') { sum = sum * 10 + c-'0'; c = getchar(); }
   printf("Your cube is %d\n", sum * sum * sum);
   return 0;
}
