use proconio::input;

fn main() {
    input!{
        a: [i32; 5],
    }
    let target = vec![1, 2, 3, 4, 5];
    for i in 0..4 {
        let mut b = a.clone();
        b.swap(i, i + 1);
        if b == target {
            println!("Yes");
            return;
        }
    }
    println!("No");
}