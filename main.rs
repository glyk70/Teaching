use std::io;

fn a_very_big_sum(arr: Vec<i64>) -> i64 {
    arr.iter().sum()
}

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    let mut arr_input = String::new();
    io::stdin().read_line(&mut arr_input).unwrap();

    let arr: Vec<i64> = arr_input
        .split_whitespace()
        .map(|x| x.parse::<i64>().unwrap())
        .collect();

    let result = a_very_big_sum(arr);
    println!("{}", result);
}