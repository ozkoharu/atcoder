use proconio::input;
use std::collections::HashSet;

fn main () {
    input!{
        s: String,
    }
    // .collect()でまとめてHashSet<char>に変換
    let used: HashSet<char> = s.chars().collect();

    for c in 'a'..='z' {

        // 文字列c　usedに含まれているか？
        if !used.contains(&c) {
            println!("{}", c);
            return;
        }
    }
}
