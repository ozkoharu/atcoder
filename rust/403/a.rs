use proconio::input;

fn main() {
    input!{
        n: usize,
        a: [i32; n],
    }

    let mut ans = 0;
    for i in 0..n {
        if i % 2 == 0 {
            ans = ans + a[i];
        }
    }

    println!("{}", ans);
}