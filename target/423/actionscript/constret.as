// should complain of a constructor trying to declare a return type
package 
{
	public class constret
	{
		public function fibo(n : int): int {
		   var x;
		   if (n <= 1) x = 1;
		   else x = fibo(n-1) + fibo(n-2);
		   return x;
		}
		public function constret(): int {
			trace(fib(4));
			return 0;
		}
	}
}
