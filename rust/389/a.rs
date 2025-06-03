use proconio::input;

fn main() {
    input! {
        s: String,
    }

    // 文字列をベクタに変換(chars()はIterator)
    let chars: Vec<char> = s.chars().collect();

    // １文字目と3文字目をi32にする
    let first: i32 = chars[0].to_digit(10).unwrap() as i32;
    let third: i32 = chars[2].to_digit(10).unwrap() as i32;

    println!("{}", first * third);
}