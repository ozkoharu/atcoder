use proconio::input;

fn main() {
    input! {
        x: i32,
        y:i32,
    }
    let mut count = 0;

    for i in 1..7 {
        for l in 1..7 {
            if i + l >= x || i + y <= l || l + y <= i {
                count += 1;
            }
        }
    }
    println!("{:.10}", count as f64 / 36.0);
}
