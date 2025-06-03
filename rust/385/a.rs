use proconio::input;

fn main() {
    input! {
        a: i32,
        b: i32,
        c: i32,
    }

    if a + b == c {
        println!("Yes");
    } else if a + c == b {
        println!("Yes");
    } else if b + c == a {
        println!("Yes");
    } else if a == b && b == c {
        println!("Yes");
    } else {
        println!("No");
    }
}