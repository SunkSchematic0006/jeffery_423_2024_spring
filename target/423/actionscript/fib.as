package 
{
	public class fib
	{
		public function fibo(n : int): int {
		   if (n <= 1) return 1;
		   else return fibo(n-1) + fibo(n-2);
		}
		public function fib() {
			trace(fibo(5));
		}
	}
}
new fib();
