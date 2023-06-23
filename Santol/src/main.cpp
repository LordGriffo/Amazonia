#include <iostream>

double calcularPi(int n) {
    double pi = 0.0;
    double sinal = 1.0;

    for (int i = 0; i < n; ++i) {
        pi += sinal / (2 * i + 1);
        sinal = -sinal; // Alternar o sinal a cada iteração
    }

    return pi * 4; // Multiplicar por 4 para obter uma aproximação de Pi
}

int main() {
    int numeroDigitos = 1000000; // Especificar o número de dígitos desejado

    double pi = calcularPi(numeroDigitos);
    std::cout.precision(50); // Configurar a precisão de saída
    std::cout << "Valor aproximado de Pi: " << pi << std::endl;

    return 0;
}
