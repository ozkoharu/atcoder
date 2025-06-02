use proconio::input;

fn main() {
    input!{
        s:String,
    }
    let result: String = s.chars()
        .filter(|c| c.is_uppercase())
        .collect();
    println!("{}", result);
}