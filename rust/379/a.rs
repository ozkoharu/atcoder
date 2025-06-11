use proconio::input;

fn main(){
    input!{
        n: usize,
    }
    let s = n.to_string();
    let chars: Vec<char> = s.chars().collect();
    println!("{}{}{} {}{}{}", chars[1], chars[2], chars[0], chars[2], chars[0], chars[1]);
}
