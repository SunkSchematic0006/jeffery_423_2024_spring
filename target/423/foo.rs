// foo.rs
static mut FOO : i64 = 12;
fn bar(x : i64, _y : String) -> i64 {
     return x;
     }
fn main() {
let z : i64;
z = bar(5, ("funf").to_string());
unsafe {
FOO = FOO * 2;
}
println!("z {}", z);
}
