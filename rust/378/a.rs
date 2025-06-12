use proconio::input;

fn main() {
    input! {
        a : [usize; 4],
    }

    let mut count = [0; 5];

    for color in a {
        count[color] += 1;
    }
    let mut ans = 0;

    for i in 0..=4 {
        ans += count[i] / 2;
    }
    println!("{}", ans);
}
