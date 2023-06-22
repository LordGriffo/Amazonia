#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "System Monitor");

    sf::Font font;
    if (!font.loadFromFile("/usr/share/fonts/truetype/msttcorefonts/arial.ttf")) {
        std::cout << "Erro ao carregar a fonte." << std::endl;
        return 1;
    }

    sf::Text cpuText("Uso da CPU: ", font, 20);
    cpuText.setPosition(10.f, 10.f);

    sf::Text memoryText("Uso de Memória: ", font, 20);
    memoryText.setPosition(10.f, 40.f);

    sf::Clock clock;
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        // Simulação do uso da CPU e memória
        float cpuUsage = rand() % 101;
        float memoryUsage = rand() % 101;

        std::string cpuString = "Uso da CPU: " + std::to_string(cpuUsage) + "%";
        cpuText.setString(cpuString);

        std::string memoryString = "Uso de Memória: " + std::to_string(memoryUsage) + "%";
        memoryText.setString(memoryString);

        window.clear();
        window.draw(cpuText);
        window.draw(memoryText);
        window.display();

        // Atualização a cada segundo
        sf::Time elapsed = clock.getElapsedTime();
        if (elapsed.asSeconds() >= 1.0) {
            clock.restart();
            std::cout << "Uso da CPU: " << cpuUsage << "%\n";
            std::cout << "Uso de Memória: " << memoryUsage << "%\n";
        }
    }

    return 0;
}
