#include "../lib/megasena.hpp"
#include <iostream>

int main() {
    int totalResultados = 10;  // Total de resultados a serem gerados
    int numerosSorteados = 6;  // Quantidade de números sorteados por resultado
    int numeroMaximo = 60;     // Número máximo para sorteio
    std::string nomeArquivo = "resultados_megasena.txt";  // Nome do arquivo de saída

    gerarPossiveisResultados(totalResultados, numerosSorteados, numeroMaximo, nomeArquivo);

    return 0;
}
