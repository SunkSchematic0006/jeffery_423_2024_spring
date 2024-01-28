// should die from calling with a parameter of wrong type
package 
{
	public class param
	{
		public function fib(n : int):int {
		   if (n <= 1) return 1;
		   return 0;
		}
		public function vardecl() {
			var x : int;
			fib("Hello");
		}
	}
}
