#include <stdio.h>
#include <string.h>

#define MAX_TENTATIVAS 6
#define MAX_PALAVRA 100

int main() {
    char palavra[MAX_PALAVRA], palavraEscondida[MAX_PALAVRA];
    char letrasTentadas[MAX_PALAVRA];
    int tentativas = 0;
    int acertos = 0;

    printf("Digite a palavra secreta: ");
    scanf("%s", palavra);
    int tamanho = strlen(palavra);

    // Inicializa a palavra escondida com asteriscos
    for (int i = 0; i < tamanho; i++) {
        palavraEscondida[i] = '*';
    }
    palavraEscondida[tamanho] = '\0';

    while (tentativas < MAX_TENTATIVAS && acertos < tamanho) {
        printf("\nPalavra: %s\n", palavraEscondida);
        printf("Tentativas: %d/%d\n", tentativas, MAX_TENTATIVAS);
        printf("Letras tentadas: %s\n", letrasTentadas);

        char letra;
        printf("Digite uma letra: ");
        scanf(" %c", &letra);

        int encontrou = 0;
        for (int i = 0; i < tamanho; i++) {
            if (palavra[i] == letra && palavraEscondida[i] == '*') {
                palavraEscondida[i] = letra;
                acertos++;
                encontrou = 1;
            }
        }

        if (!encontrou) {
            letrasTentadas[tentativas] = letra;
            tentativas++;
        }
    }

    if (acertos == tamanho) {
        printf("\nParabéns, você ganhou! A palavra era: %s\n", palavra);
    } else {
        printf("\nVocê perdeu! A palavra era: %s\n", palavra);
    }

    return 0;
}
