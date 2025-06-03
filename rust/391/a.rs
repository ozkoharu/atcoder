use proconio::input;

fn main() {
    input! {
        hougaku: String,
    }

    if hougaku == "N" {
        println!("S");
    } else if hougaku == "E" {
        println!("W");
    } else if hougaku == "W" {
        println!("E");
    } else if hougaku == "S" {
        println!("N")
    } else if hougaku == "NE" {
        println!("SW");
    } else if hougaku == "NW" {
        println!("SE");
    } else if hougaku == "SE" {
        println!("NW");
    } else if hougaku == "SW" {
        println!("NE");
    }
}