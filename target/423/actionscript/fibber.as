package {
    public class fibber {
	public function read(): String {
	return "5"
	}
	public function fib(n : int): int {
	   if (n <= 1) return 1
	   else return fib(n-1) + fib(n-2)
	}
	public function fibber() {
            var s: String
	    var i: int
            while (s = read()) {
	       i = int(s)
	       if (i <= 0) break
	       trace(fibo(i))
	       }
	}
    }
}
