use proconio::input;

fn main() {
    input!{
        a: i32,
        b: i32,
        c: i32, 
        d: i32,
    }

    if a == c {
        if b > d {
            println!("Yes");
        } else {
            println!("No");
        }
    } else if a > c {
        println!("Yes");
    } else if a < c {
        println!("No");
    }

}