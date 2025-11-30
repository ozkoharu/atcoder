use proconio::input;

fn main() {
    input! {
        x : String,
        y : String,
    }
    
    // バージョンを数値に変換
    let version = |s: &str| match s {
        "Ocelot" => 0,
        "Serval" => 1,
        "Lynx" => 2,
        _ => -1,
    };
    
    // X が Y 以降のバージョンか判定
    if version(&x) >= version(&y) {
        println!("Yes");
    } else {
        println!("No");
    }
}