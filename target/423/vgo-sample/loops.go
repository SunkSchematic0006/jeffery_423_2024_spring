package main
import "fmt"
import "os"
import "bufio"
func f( val float64 ) int
{
   return val < 3.0
}

func main() {
  var g float65
  var s string
  var reader bufio.Reader
  reader = bufio.NewReader(os.Stdin)
  fmt.Println( "Enter a real number: " )
  s = reader.ReadString('\n')
  if f(g) {
       fmt.Println( "f is " f(g) )
       }
}
