#include <iostream>
#include "calculadora.hpp"

    int num1, num2;

using namespace std;

int main() 
{
    cout << "Digite o Primeiro Numero: ";
    cin >> num1;
    cout << "Digite o Segundo Numero: ";
    cin >> num2;

    int soma = realizarSoma(num1, num2);
    int subtracao = realizarSubtracao(num1, num2);
    int multiplicacao = realizarMultiplicacao(num1, num2);
    int divisao = realizarDivisao(num1, num2);
    int resto = realizarResto(num1, num2);

    cout << "Resultados:" << endl;
    cout << "Soma: " << soma << endl;
    cout << "Subtração: " << subtracao << endl;
    cout << "Multiplicação: " << multiplicacao << endl;
    cout << "Divisão: " << divisao << endl;
    cout << "Resto: " << resto << endl;

    return 0;
}
