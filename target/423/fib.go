package main
import "fmt"
func fib(n int) int {
  if n < 3 { return 1 }
  return fib(n-2) + fib(n-1)
}
func main() {
   var i int
   for i < 7 {
      fmt.Println(fib(i))
      i += 1
      }
}
