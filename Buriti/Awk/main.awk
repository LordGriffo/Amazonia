#!/usr/bin/awk -f

BEGIN {
    printf "Digite o Primeiro Numero: "
    getline num1 < "-"
    printf "Digite o Segundo Numero: "
    getline num2 < "-"

    soma = num1 + num2
    subtracao = num1 - num2
    multi = num1 * num2
    div = num1 / num2
    res = num1 % num2

    printf "+: %d \n", soma
    printf "-: %d \n", subtracao
    printf "*: %d \n", multi
    printf "/: %d \n", div
    printf "%%: %d \n", res
}
