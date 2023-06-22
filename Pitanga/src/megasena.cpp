#include "../lib/megasena.hpp"
#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>

void gerarPossiveisResultados(int total, int numeros, int maximo, const std::string& arquivo) {
    std::ofstream ofs(arquivo);

    if (!ofs) {
        std::cerr << "Erro ao abrir o arquivo de saída." << std::endl;
        return;
    }

    srand(time(0));

    for (int i = 0; i < total; i++) {
        ofs << "Resultado " << i + 1 << ": ";

        for (int j = 0; j < numeros; j++) {
            int numero = rand() % maximo + 1;
            ofs << numero << " ";
        }

        ofs << std::endl;
    }

    ofs.close();

    std::cout << "Os resultados foram salvos no arquivo: " << arquivo << std::endl;
}
