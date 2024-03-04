package 
{
	public class mustreturn
	{
		public function fib(n : int):int {
		   if (n <= 1) return 1;
		}
		public function vardecl() {
			var x : int;
			fib(5);
		}
	}
}
