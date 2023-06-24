use std::io;

fn main() {
    let mut num1 = String::new();
    let mut num2 = String::new();

    println!("Digite o Primeiro Numero: ");
    io::stdin().read_line(&mut num1).expect("Falha ao ler a entrada");
    let num1: i32 = num1.trim().parse().expect("Digite um número válido");

    println!("Digite o Segundo Numero: ");
    io::stdin().read_line(&mut num2).expect("Falha ao ler a entrada");
    let num2: i32 = num2.trim().parse().expect("Digite um número válido");

    let soma = num1 + num2;
    let subtracao = num1 - num2;
    let multi = num1 * num2;
    let div = num1 / num2;
    let res = num1 % num2;

    println!("+: {}", soma);
    println!("-: {}", subtracao);
    println!("*: {}", multi);
    println!("/: {}", div);
    println!("%: {}", res);
}
