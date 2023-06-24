#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

int main() {
    int num1, num2;

    printf("Digite o Primeiro Numero: ");
    scanf("%d", &num1);
    printf("Digite o Segundo Numero: ");
    scanf("%d", &num2);

    realizarSoma(num1, num2);
    realizarSubtracao(num1, num2);
    realizarMultiplicacao(num1, num2);
    realizarDivisao(num1, num2);
    realizarResto(num1, num2);

    return 0;
}
