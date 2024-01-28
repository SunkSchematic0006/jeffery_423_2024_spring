   fn main() {
      println!("hello,\t{}! ", &(f("golly", 12))[..]);
   }
fn f(s : &str, i : i64) -> String {
   return format!("{} you {}", s, i);
}
