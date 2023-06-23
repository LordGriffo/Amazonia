#include "../lib/Inimigo.hpp"
#include <iostream>



Inimigo::Inimigo(std::string nome, int nivel)
    : nome(nome), nivel(nivel), energia(50 + nivel * 10) {}


void Inimigo::Atacar() {
    std::cout << "O Inimigo " << nome << " te atacou!" << std::endl;
}

bool Inimigo::EstaVivo() {
    return energia > 0;
}

void Inimigo::SofrerDano(int dano) {
    energia -= dano;
    if (energia < 0)
        energia = 0;
}
