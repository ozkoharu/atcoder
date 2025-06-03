use proconio::input;

fn main() {
    input! {
        s: String,
    }
    // 文字列をベクタに変換
    let chars: Vec<char> = s.chars().collect();
    let ans = format!("{}UPC", chars[0]);
    println!("{}", ans);
}