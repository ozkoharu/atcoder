use proconio::input;

fn main () {
    input! {
        x: i32,
    }

    let ans = x * x * x;
    println!("{}", ans);
}
