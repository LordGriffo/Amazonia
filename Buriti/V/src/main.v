import os

fn main() {
    mut num1, num2, soma, subtracao, multi, divisao, res int

    print("Digite o Primeiro Numero: ")
    os.read(int(num1))
    print("Digite o Segundo Numero: ")
    os.read(int(num2))

    soma = num1 + num2
    subtracao = num1 - num2
    multi = num1 * num2
    divisao = num1 / num2
    res = num1 % num2

    printf("+: %d \n", soma)
    printf("-: %d \n", subtracao)
    printf("*: %d \n", multi)
    printf("/: %d \n", divisao)
    printf("%%: %d \n", res)
}
