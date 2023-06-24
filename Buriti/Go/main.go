package main

import "fmt"


func main() {
	var num1, num2, soma, subtracao, multi, div, res int

	fmt.Print("Digite o Primeiro Numero: ")
	fmt.Scanln(&num1)

	fmt.Print("Digite o Segundo Numero: ")
	fmt.Scanln(&num2)

	soma = num1 + num2
	subtracao = num1 - num2
	multi = num1 * num2
	div = num1 / num2
	res = num1 % num2

	fmt.Printf("+: %d\n", soma)
	fmt.Printf("-: %d\n", subtracao)
	fmt.Printf("*: %d\n", multi)
	fmt.Printf("/: %d\n", div)
	fmt.Printf("%%: %d\n", res)
}
