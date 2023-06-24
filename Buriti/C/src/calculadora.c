#include <stdio.h>
#include "calculadora.h"

void realizarSoma(int num1, int num2) {
    int resultado = num1 + num2;
    printf("+: %d \n", resultado);
}

void realizarSubtracao(int num1, int num2) {
    int resultado = num1 - num2;
    printf("-: %d \n", resultado);
}

void realizarMultiplicacao(int num1, int num2) {
    int resultado = num1 * num2;
    printf("*: %d \n", resultado);
}

void realizarDivisao(int num1, int num2) {
    int resultado = num1 / num2;
    printf("/: %d \n", resultado);
}

void realizarResto(int num1, int num2) {
    int resultado = num1 % num2;
    printf("%%: %d \n", resultado);
}
