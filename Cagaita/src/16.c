#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_PASSWORD_LENGTH 16

int main() {
    srand(time(NULL));

    char characters[] = "!@#$%^&*()_-+=[]{}|\\:;<>.,?/`~'\"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int numCharacters = sizeof(characters) - 1;

    int passwordLength;
    printf("Digite o comprimento da senha desejada: ");
    scanf("%d", &passwordLength);

    if (passwordLength <= 0 || passwordLength > MAX_PASSWORD_LENGTH) {
        printf("Comprimento da senha inválido. Deve ser um valor positivo até %d.\n", MAX_PASSWORD_LENGTH);
        return 1;
    }

    char password[MAX_PASSWORD_LENGTH + 1];
    int i;

    for (i = 0; i < passwordLength; i++) {
        int randomIndex = rand() % numCharacters;
        password[i] = characters[randomIndex];
    }

    password[passwordLength] = '\0';

    printf("Senha gerada: %s\n", password);

    return 0;
}
