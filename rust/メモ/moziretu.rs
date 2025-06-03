use proconio::input;

fn main() {
    input!{
        s: String,
    }

    let result: String = s.chars()
        .filter(|&c| c == '2')
        .collect();
    println!("{}", result);
}