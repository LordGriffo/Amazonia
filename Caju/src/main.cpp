#include <iostream>
#include <string>

int main() {
    int nossaPontuacao = 0;
    int delesPontuacao = 0;

    std::string nomeNos;
    std::string nomeEles;

    std::cout << "Digite o nome do time 'Nós': ";
    std::cin >> nomeNos;

    std::cout << "Digite o nome do time 'Eles': ";
    std::cin >> nomeEles;

    char opcao;
    do {
        std::cout << "Placar atual: " << nomeNos << " " << nossaPontuacao << " - " << nomeEles << " " << delesPontuacao << std::endl;
        std::cout << "Digite 'N' para marcar um ponto para " << nomeNos << std::endl;
        std::cout << "Digite 'E' para marcar um ponto para " << nomeEles << std::endl;
        std::cout << "Digite 'Q' para sair" << std::endl;
        std::cin >> opcao;

        switch (opcao) {
            case 'N':
            case 'n':
                nossaPontuacao++;
                break;
            case 'E':
            case 'e':
                delesPontuacao++;
                break;
            case 'Q':
            case 'q':
                std::cout << "Encerrando o placar." << std::endl;
                break;
            default:
                std::cout << "Opção inválida. Tente novamente." << std::endl;
                break;
        }
    } while (opcao != 'Q' && opcao != 'q');

    return 0;
}
