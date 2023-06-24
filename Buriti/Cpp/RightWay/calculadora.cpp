#include <iostream>
#include "calculadora.hpp"

using namespace std;

void realizarSoma(int num1, int num2) {
    int resultado = num1 + num2;
    cout << "+: " << resultado << endl;
}

void realizarSubtracao(int num1, int num2) {
    int resultado = num1 - num2;
    cout << "-: " << resultado << endl;
}

void realizarMultiplicacao(int num1, int num2) {
    int resultado = num1 * num2;
    cout << "*: " << resultado << endl;
}

void realizarDivisao(int num1, int num2) {
    int resultado = num1 / num2;
    cout << "/: " << resultado << endl;
}

void realizarResto(int num1, int num2) {
    int resultado = num1 % num2;
    cout << "%: " << resultado << endl;
}
