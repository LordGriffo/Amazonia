#include "../lib/ElfPet.hpp"
#include <iostream>
#include <string>


int main() {
    std::string nome;
    int idade;

    std::cout << "Bem-vindo ao Simulador de ElfPet!" << std::endl;
    std::cout << "Crie seu ElfPet:" << std::endl;
    std::cout << "Digite o nome: ";
    std::cin >> nome;
    std::cout << "Digite a idade: ";
    std::cin >> idade;
	
    ElfPet elfPet(nome, idade);

    int opcao;

    do {		
        std::cout << std::endl;
        std::cout << "Escolha uma opção:" << std::endl;
        std::cout << "1. Dormir" << std::endl;
        std::cout << "2. Comer" << std::endl;
        std::cout << "3. Treinar" << std::endl;
        std::cout << "4. Brincar" << std::endl;
        std::cout << "5. Ver status" << std::endl;
        std::cout << "6. Batalhar contra um Petista" << std::endl;
        std::cout << "7. Envelhecer" << std::endl;
        std::cout << "0. Sair" << std::endl;

        std::cout << "Opção: ";
        std::cin >> opcao;
		
        switch (opcao) {
            case 1:
                elfPet.Dormir();
                break;
            case 2:
                elfPet.Comer();
                break;
            case 3:
                elfPet.Treinar();
                break;
            case 4:
                elfPet.Brincar();
                break;
            case 5:
                elfPet.MostrarStatus();
                break;
            case 6:
                elfPet.Batalhar();
                break;
            case 7:
				elfPet.Envelhecer();
				break;
            case 0:
                std::cout << "Até logo!" << std::endl;
                break;
            default:
                std::cout << "Opção inválida. Tente novamente." << std::endl;
                break;
        }
    } while (opcao != 0);

    return 0;
}
