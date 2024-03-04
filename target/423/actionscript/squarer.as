package 
{
	public class squarer
	{
		public function square(): void {
		   var i : int;
		   i = 5;
		   trace(i * i);
		}
		public function squarer() {
			trace(square());
		}
	}
}
new squarer();
