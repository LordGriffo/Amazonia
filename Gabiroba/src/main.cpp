#include <iostream>
#include <fstream>
#include <string>
#include "../lib/gabiroba.hpp"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Uso: " << argv[0] << " <nome_arquivo>" << std::endl;
        return 1;
    }

    std::string nomeArquivo = argv[1];
    exibirConteudoArquivo(nomeArquivo);

    return 0;
}
