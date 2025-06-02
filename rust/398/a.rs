use proconio::input;

fn main() {
    input!{
        n: usize,
    }

    // 偶数
    if n % 2 == 0 {
        let c = (n - 2) / 2;
        let result = "-".repeat(c) + "==" + &"-".repeat(c);
        println!("{}", result);
    } else {
        // 奇数
        let c = (n - 1) / 2;
        let result = "-".repeat(c) + "=" + &"-".repeat(c);
        println!("{}", result);
    }
}