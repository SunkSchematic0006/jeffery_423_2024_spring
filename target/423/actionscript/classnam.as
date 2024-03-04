package 
{
	public class mustreturn
	{
		public function fib(n : int):int {
		   if (n <= 1) return 1;
		   return 0;
		}
		public function mustreturn() {
			var x : int;
			fib(5);
		}
	}
}
