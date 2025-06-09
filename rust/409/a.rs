use proconio::input;

fn main() {
    input! {
        n : usize,
        t : String,
        a : String,
    }

    let mut flag = false;
    let t_array : Vec<char> = t.chars().collect();
    let a_array : Vec<char> = a.chars().collect();

    for i in 0..n {
        if t_array[i] == 'o' && a_array[i] == 'o' {
            flag = true;
            break;
        }
    }
    if flag {
        println!("Yes");
    } else {
        println!("No");
    }
}
