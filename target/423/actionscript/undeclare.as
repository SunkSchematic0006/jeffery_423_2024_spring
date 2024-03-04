// should die because x is undeclared
package 
{
	public class undeclare
	{
		public function fib(n : int) {
		   x = 5;
		   if (n <= 1) return 1;
		   else return x;
		}
		
		public function undeclare() {
			trace("undeclare");
		}
	}
}
