#include "Macros.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include "WindowDefinition.h"
#include "LinkedList.h"
#include "UnitTests.h"

using namespace sf;

// https://www.sfml-dev.org/tutorials/2.5/

void displayWindow(WindowDefinition* definition);


int main()
{
    #ifdef UNIT_TESTS
    RunUnitTests();
    return -1;
    #else
    WindowDefinition* definition = GetWindowDefinition();
    displayWindow(definition);
    #endif
}

void displayWindow(WindowDefinition* definition)
{
    RenderWindow window(VideoMode(definition->size[0], definition->size[1]), definition->name);

    CircleShape shape(100.f);
    shape.setPosition(200, 150);
    shape.setFillColor(Color::Green);

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

}