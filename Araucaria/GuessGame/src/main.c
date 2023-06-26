#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto, palpite, tentativas = 0;
    srand(time(NULL));
    numeroSecreto = rand() % 100 + 1;

    printf("Bem-vindo ao Jogo da Adivinhação!\n");

    do {
        printf("Digite um palpite: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite > numeroSecreto) {
            printf("Palpite alto! Tente novamente.\n");
        } else if (palpite < numeroSecreto) {
            printf("Palpite baixo! Tente novamente.\n");
        } else {
            printf("Parabéns! Você acertou em %d tentativas.\n", tentativas);
        }
    } while (palpite != numeroSecreto);

    return 0;
}
