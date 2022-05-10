#include <iostream>
#include <SFML/Graphics.hpp>

// https://www.sfml-dev.org/tutorials/2.5/

int main()
{
    std::cout << "Hello World!\n";

    sf::RenderWindow window(sf::VideoMode(500, 400), "GameEngine");
    sf::CircleShape shape(100.f);
    shape.setPosition(200,150);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }


}