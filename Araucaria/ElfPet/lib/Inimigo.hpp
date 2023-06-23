#ifndef INIMIGO_HPP
#define INIMIGO_HPP

#include <string>


class Inimigo {
private:
    std::string nome;
    int nivel;
    int energia;

public:
    Inimigo(std::string nome, int energia);
    void Atacar();
    bool EstaVivo();
    void SofrerDano(int dano);
};


#endif
