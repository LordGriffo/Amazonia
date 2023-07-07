#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

int num1, num2;

int main()
{
    printf("Digite o Primeiro Numero: ");
    scanf("%d", &num1);
    printf("Digite o Segundo Numero: ");
    scanf("%d", &num2);

    realizarSoma(num1, num2);
    realizarSubtracao(num1, num2);
    realizarMultiplicacao(num1, num2);
    realizarDivisao(num1, num2);
    realizarResto(num1, num2);

    printf("%d\n", realizarSoma(num1, num2));
    printf("%d\n", realizarSubtracao(num1, num2));
    printf("%d\n", realizarMultiplicacao(num1, num2));
    printf("%d\n", realizarDivisao(num1, num2));
    printf("%d\n", realizarResto(num1, num2));

    return 0;
}
