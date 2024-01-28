package main

import "fmt"
//import "bufio"
//import "os"

func main() {
   var text string
//   var reader *bufio.Reader
   fmt.Println("Enter a number:")



//   reader = bufio.NewReader(os.Stdin)
//   text,_ = reader.ReadString('\n')

   fmt.Scanln(&text)
   fmt.Println("you entered: ", text)
}

func Scanln(s *string) {
}
