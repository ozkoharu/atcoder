use proconio::input;

fn main() {
    input! {
        n : usize,
        s : String,
    }
    
    if n % 2 == 0 {
        println!("No");
        return;
    }

    let chars: Vec<char> = s.chars().collect();
    let mid = n / 2;

    for i in 0..mid  {
        if chars[i] != '1' {
            println!("No");
            return;
        }
    }

    if chars[mid] != '/' {
        println!("No");
        return;
    }

    for i in mid + 1..n {
        if chars[i] != '2' {
            println!("No");
            return;
        }
    }        
    println!("Yes");
}