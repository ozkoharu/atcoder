use proconio::input;

fn main() {
    input!{
        _n: i32,
        s: String,
        t: String,
    }
    let mut ans = 0;
    
    // s.chars()とt.chars()を同時にループさせてる
    for (sc, tc) in s.chars().zip(t.chars()) {
        if sc != tc {
            ans = ans + 1;
        }
    }
    
    println!("{}", ans);
}