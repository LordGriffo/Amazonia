#include <iostream>
#include "calculadora.hpp"

    int num1, num2;

using namespace std;

int main()
{
    std::cout << "Digite o Primeiro Numero: ";
    std::cin >> num1;
    std::cout << "Digite o Segundo Numero: ";
    std::cin >> num2;

    int soma = realizarSoma(num1, num2);
    int subtracao = realizarSubtracao(num1, num2);
    int multiplicacao = realizarMultiplicacao(num1, num2);
    int divisao = realizarDivisao(num1, num2);
    int resto = realizarResto(num1, num2);

    std::cout << "Resultados:" << std::endl;
    std::cout << "Soma: " << soma << std::endl;
    std::cout << "Subtração: " << subtracao << std::endl;
    std::cout << "Multiplicação: " << multiplicacao << std::endl;
    std::cout << "Divisão: " << divisao << std::endl;
    std::cout << "Resto: " << resto << std::endl;

    return 0;
}
