
fn has_digit(value : i32, digit : i32) -> bool {
    let mut v = value;
    while v > 0 {
        let d = v % 10;
        v = v / 10;
        if d == digit {
            return true;
        }
    }

    return false;
}

fn main() {

    println!("Hello, world!");
    for i in 0..100 {
        let m3 = i % 3 == 0 || has_digit(i, 3);
        let m5 = i % 5 == 0 || has_digit(i, 5);
        if m3 && m5 {
            println!("FizzBuzz");
        }
        else if m3 {
            println!("Fizz");
        }
        else if m5 {
            println!("Buzz");
        }
        else
        {
            println!("{}", i)
        }
    }
}
