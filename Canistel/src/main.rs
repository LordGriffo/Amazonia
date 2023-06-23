fn is_prime(n: u64) -> bool {
    if n <= 1 {
        return false;
    }

    for i in 2..=(n as f64).sqrt() as u64 {
        if n % i == 0 {
            return false;
        }
    }

    true
}

fn find_next_prime(start: u64) -> u64 {
    let mut n = start + 1;
    while !is_prime(n) {
        n += 1;
    }
    n
}

fn main() {
    let mut current_prime = 1;

    loop {
        current_prime = find_next_prime(current_prime);
        println!("Next prime: {}", current_prime);
    }
}
