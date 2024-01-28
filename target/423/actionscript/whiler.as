package 
{
	public class whiler
	{
		public function loopy(n : int): int {
		   var i : int;
		   i = 1;
		   while (i <= n) {
		      trace(i);
		      i = i + 1;
		      }
		   return n;
		}
		public function whiler() {
			trace(loopy(5));
		}
	}
}
new whiler();
