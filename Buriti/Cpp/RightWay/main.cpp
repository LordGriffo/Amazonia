#include <iostream>
#include "calculadora.hpp"

using namespace std;

int main() {
    int num1, num2;

    cout << "Digite o Primeiro Numero: ";
    cin >> num1;
    cout << "Digite o Segundo Numero: ";
    cin >> num2;

    realizarSoma(num1, num2);
    realizarSubtracao(num1, num2);
    realizarMultiplicacao(num1, num2);
    realizarDivisao(num1, num2);
    realizarResto(num1, num2);

    return 0;
}
