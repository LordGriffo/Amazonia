#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int num1;
int num2;
int soma;
int subtracao;
int multi;
int divisao;
int res;

int main() {
    printf("Digite o Primeiro Numero: ");
    scanf("%d",&num1);
    printf("Digite o Segundo Numero:");
    scanf("%d",&num2);
    soma            = num1 + num2;
    subtracao       = num1 - num2;
    multi           = num1 * num2;
    divisao         = num1 / num2;
    res             = num1 % num2;
    printf("+: %d \n", soma);
    printf("-: %d \n", subtracao);
    printf("*: %d \n", multi);
    printf("/: %d \n", divisao);
    printf("%: %d \n", res);
    return 0;
}
