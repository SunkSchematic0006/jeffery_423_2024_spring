package 
{
	public class ufib
	{
		public function fibo(n): int {
		   if (n <= 1) return 1;
		   else return fibo(n-1) + fibo(n-2);
		}
		public function ufib() {
			trace(fibo(4));
		}
	}
}
