   fn main() {
      println!("hello,\t{}! ", &(f("golly", 121212121212121212121212121212121212))[..]);
   }
fn f(s : &str, i : i64) -> String {
   return format!("{} you {}", s, i);
}
