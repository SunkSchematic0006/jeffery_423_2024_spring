package 
{
	public class typeck
	{
		public function fibo(n : int): int {
		   var x
		   if (n <= 1) x = 1;
		   else x = fibo(n-1) + fibo(n-2);
		   return x
		}
		public function fib() {
			trace(fib(4));
		}
	}
}
