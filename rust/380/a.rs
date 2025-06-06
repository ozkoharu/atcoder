use proconio::input;

fn main() {
    input! {
        n: i32,
    }
    let num_str = n.to_string();
    let mut count_one = 0;
    let mut count_two = 0;
    let mut count_three = 0;
    for c in num_str.chars() {
        if c == '1' {
            count_one += 1;
        }

        if c == '2' {
            count_two += 1;
        }

        if c == '3' {
            count_three += 1;
        }
    }
    if count_one == 1 && count_two == 2 && count_three == 3 {
        println!("Yes");
        return;
    } else {
        println!("No");
        return;
    }

}