use proconio::input;

fn main() {
    input!{
        s : String,
    }
    let target = ["ABC", "ACB", "BAC", "BCA", "CAB", "CBA"];
    if target.contains(&s.as_str()) {
        println!("Yes");
    } else {
        println!("No");
    }
}
