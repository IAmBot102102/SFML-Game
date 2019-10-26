#include <iostream>

#include "SFML/Window.hpp"

int main(){
    using namespace sf;

    Window window(VideoMode(800, 600), "SFML Game");
    window.setActive(true);

    window.display();
    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
            if (event.type == Event::KeyPressed) window.close();
    }

    return 0;
}
