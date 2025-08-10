#include <SFML/Graphics.hpp>

int main() {
    // Crée une fenêtre de 800x600 pixels
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Test - OK");

    // Crée un cercle de rayon 100 pixels
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    shape.setPosition(300, 200); // Centre approximatif

    // Boucle principale
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Black); // Fond noir
        window.draw(shape);
        window.display();
    }

    return 0;
}
