#include <stdio.h>
#include <stdbool.h>

bool validarCPF(const char* cpf) {
    int digito1 = 0, digito2 = 0;
    int peso = 10;

    // Verifica o primeiro dígito verificador
    for (int i = 0; i < 9; i++) {
        if (cpf[i] < '0' || cpf[i] > '9')
            return false;
        
        digito1 += (cpf[i] - '0') * peso;
        peso--;
    }
    digito1 = (digito1 * 10) % 11;
    if (digito1 == 10)
        digito1 = 0;

    if (cpf[9] != (digito1 + '0'))
        return false;

    // Verifica o segundo dígito verificador
    peso = 11;
    for (int i = 0; i < 10; i++) {
        digito2 += (cpf[i] - '0') * peso;
        peso--;
    }
    digito2 = (digito2 * 10) % 11;
    if (digito2 == 10)
        digito2 = 0;

    if (cpf[10] != (digito2 + '0'))
        return false;

    return true;
}

int main() {
    char cpf[12];

    printf("Digite um CPF: ");
    scanf("%s", cpf);

    if (validarCPF(cpf))
        printf("CPF válido\n");
    else
        printf("CPF inválido\n");

    return 0;
}
