#include "../lib/ElfPet.hpp"
#include "../lib/Inimigo.hpp"
#include <iostream>



ElfPet::ElfPet(std::string nome, int idade)
    : nome(nome), nivel(0), idade(0), energia(100), felicidade(100) {}

void ElfPet::Dormir() {
    energia += 20;
    felicidade += 10;
    std::cout << "Seu ElfPet dormiu e recuperou energia e felicidade." << std::endl;
}

void ElfPet::Comer() {
    energia += 10;
    felicidade += 5;
    std::cout << "Seu ElfPet comeu e recuperou energia e felicidade." << std::endl;
}

void ElfPet::Treinar() {
    nivel++;
    energia -= 30;
    felicidade -= 20;
    std::cout << "Seu ElfPet treinou e gastou energia e felicidade." << std::endl;
}

void ElfPet::Brincar() {
    energia -= 20;
    felicidade += 30;
    std::cout << "Seu ElfPet brincou e gastou energia, mas ficou mais feliz." << std::endl;
}

void ElfPet::MostrarStatus() {
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Nível: " << nivel << std::endl;
    std::cout << "Idade: " << idade << std::endl;
    std::cout << "Energia: " << energia << std::endl;
    std::cout << "Felicidade: " << felicidade << std::endl;
}

void ElfPet::Envelhecer() {
	++idade;
	std::cout << nome << "Envelheceu." << std::endl;
}


bool ElfPet::EstaVivo() {
    return energia > 0;
}

void ElfPet::SofrerDano(int dano) {
    energia -= dano;
    if (energia < 0)
        energia = 0;
}

void ElfPet::Batalhar() {
    Inimigo petista("Petista", 1);

    while (EstaVivo() && petista.EstaVivo()) {
        MostrarStatus();
        petista.Atacar();

        std::cout << "Escolha uma ação: " << std::endl;
        std::cout << "1. Atacar" << std::endl;
        std::cout << "2. Fugir" << std::endl;

        int escolha;
        std::cout << "Opção: ";
        std::cin >> escolha;

        if (escolha == 1) {
            int dano = 20 + rand() % 20;
            petista.SofrerDano(dano);
            std::cout << "Você atacou o Petista causando " << dano << " de dano!" << std::endl;
        } else if (escolha == 2) {
            std::cout << "Você fugiu da batalha!" << std::endl;
            break;
        } else {
            std::cout << "Opção inválida. Tente novamente." << std::endl;
        }

        if (petista.EstaVivo()) {
            int dano = 10 + rand() % 10;
            SofrerDano(dano);
            std::cout << "O Petista te atacou causando " << dano << " de dano!" << std::endl;
        }
    }

    if (EstaVivo()) {
        std::cout << "Parabéns! Você venceu o Petista!" << std::endl;
    } else {
        std::cout << "Seu ElfPet foi derrotado pelo Petista. Tente novamente!" << std::endl;
    }
}
