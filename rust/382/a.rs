use proconio::input;

fn main() {
    input!{
        n: usize,
        mut d: i32,
        s: String,
    }
    
    let mut chars: Vec<char> = s.chars().collect();
    
    for i in 0..n {
        if d > 0 && chars[i] == '@' {
            chars[i] = '.';
            d -= 1;
        }
    }
    
    let dot_count = chars.iter().filter(|&&c| c == '.').count();
    println!("{}", dot_count);
}