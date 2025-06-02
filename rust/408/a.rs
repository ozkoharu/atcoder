use proconio::input;

fn main () {
    input! {
        n: usize,
        s: i32,
        t: [i32; n],
    }

    if t[0] > s {
        println!("No");
        return;
    }

    for i in 0..(n - 1) {
        if t[i + 1] - t[i] >= s + 1  {
            println!("No");
            return;
        }
    }
    println!("Yes");
}