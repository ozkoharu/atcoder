use proconio::input;

fn main() {
    input! {
     a: f32,
     b: f32,  
    }
    let ans =  a / b;
    println!("{}", ans.round());
}