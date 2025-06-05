use proconio::input;
use std::cmp::max;

fn main() {
    input! {
        n: usize,
    }
    let mut now:i32 = 0;
    let mut result:i32 = 0;
    for i in 0..n {
        input! {
            t: i32,
            v: i32,
        }
        result -= t - now;
        result = max(result, 0);
        result += v;
        now = t;
    }
    println!("{}", result);
}