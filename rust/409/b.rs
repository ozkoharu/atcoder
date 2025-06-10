use proconio::input;

fn main() {
    input!{
        n: usize,
        mut a: [usize; n],
    }
    // 降順ソート
    a.sort_by(|a, b| b.cmp(a));

    let mut ans = 0;
    for x in (1..=n).rev() {
       if a[x - 1] >= x {
        println!("{}", x);
        return;
       }
    }
    println!("0");
}
