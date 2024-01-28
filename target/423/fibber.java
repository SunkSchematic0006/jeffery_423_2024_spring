public class fibber {
public static void main()
{
   int i;
   i = 0;
   while (i < 5) {
      write(fib(i));
      i += 1;
      }
}
public static int fib(int n)
{
  if (n < 3) { return 1; }
  return fib(n-2) + fib(n-1);
}
public static void write(int i) {
  System.out.println(i);
}
}
