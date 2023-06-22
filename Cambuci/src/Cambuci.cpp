#include "../lib/Cambuci.hpp"
#include <iostream>
#include <fstream>
#include <iomanip>

void exibirConteudoArquivo(const std::string& nomeArquivo) {
    std::ifstream arquivo(nomeArquivo);
    if (arquivo.is_open()) {
        std::cout << "┌───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐" << std::endl;
        std::cout << "│ File: " << nomeArquivo << std::endl;
        std::cout << "├───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┤" << std::endl;
        std::cout << "│" << std::endl;

        std::string linha;
        int numeroLinha = 1;
        while (std::getline(arquivo, linha)) {
            std::cout << std::setw(4) << numeroLinha << "\t│   " << linha << std::endl;
            numeroLinha++;
        }

        std::cout << "└───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘" << std::endl;
        arquivo.close();
    } else {
        std::cerr << "Erro ao abrir o arquivo: " << nomeArquivo << std::endl;
    }
}
