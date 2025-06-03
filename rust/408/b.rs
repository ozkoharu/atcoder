use proconio::input;

fn main() {
    input! {
        n: usize,
      mut a: [i32; n],
    }
    a.sort();
    a.dedup();
    let length = a.len();
    println!("{}", length);

    let output: Vec<String> = a.iter().map(|x| x.to_string()).collect();
    println!("{}", output.join(" "));
}