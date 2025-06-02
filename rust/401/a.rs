use proconio::input;

fn main() {
    input!{
        s: i32,
    }
    if s >= 200 && s <= 299 {
        println!("Success");
    } else {
        println!("Failure");
    }
}