// should die from calling with a missing parameter
package 
{
	public class missparam
	{
		public function fib(n : int):int {
		   if (n <= 1) return 1;
		   return 0;
		}
		public function vardecl() {
			var x : int;
			fib();
		}
	}
}
