#include <iostream>
#include <fstream>
#include <string>
#include "../lib/gabiroba.hpp"

void exibirConteudoArquivo(const std::string& nomeArquivo) {
    std::ifstream arquivo(nomeArquivo);
    if (arquivo.is_open()) {
        std::string linha;
        while (std::getline(arquivo, linha)) {
            std::cout << linha << std::endl;
        }
        arquivo.close();
    } else {
        std::cerr << "Erro ao abrir o arquivo: " << nomeArquivo << std::endl;
    }
}
