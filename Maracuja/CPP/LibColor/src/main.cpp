#include <iostream>
#include "../lib/color.hpp"

int main() {
    std::cout << Color::set(Color::RED) << "Texto em vermelho" << Color::set(Color::RESET) << std::endl;
    std::cout << Color::set(Color::GREEN) << "Texto em verde" << Color::set(Color::RESET) << std::endl;
    std::cout << Color::set(Color::BLUE) << "Texto em azul" << Color::set(Color::RESET) << std::endl;

    return 0;
}
