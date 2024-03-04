package fmt // this would be an error in regular VGo source,
            // but if I say import "fmt" how do I get its symbols?

func Println(string s) {  // this is fake, to satisfy symbol table
}

func Scan(i *int) {   // this is fake, to satisfy symbol table
}
