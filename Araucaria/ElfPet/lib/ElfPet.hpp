#ifndef ELFPET_HPP
#define ELFPET_HPP

#include <string>


class ElfPet {
private:
    std::string nome;
    int nivel;
    int idade;
    int energia;
    int felicidade;

public:
    ElfPet(std::string nome, int idade);
    void Dormir();
    void Comer();
    void Treinar();
    void Brincar();
    void MostrarStatus();
    bool EstaVivo();
    void SofrerDano(int dano);
    void Batalhar();
    void Envelhecer();
};

#endif
