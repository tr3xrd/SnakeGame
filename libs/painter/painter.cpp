#include "painter.hpp"
#include <iostream>

Painter::Painter(sf::RenderWindow& window) : _window(window) {
    if (!_font.openFromFile("arial.ttf")) {
        std::cerr << "Error: could not load arial.ttf" << std::endl;
    }
}

void Painter::DrawImage(Point topLeft, Point bottomRight, char** image) {
    for (int y = topLeft.y; y <= bottomRight.y; y++) {
        for (int x = topLeft.x; x <= bottomRight.x; x++) {
            sf::RectangleShape cell(sf::Vector2f(20.f, 20.f));
            cell.setPosition(sf::Vector2f(x * 20.f, y * 20.f));
            if (image[y][x] == '#')
                cell.setFillColor(sf::Color::Green);
            else if (image[y][x] == 'O')
                cell.setFillColor(sf::Color::Red);
            else
                cell.setFillColor(sf::Color::Black);
            _window.draw(cell);
        }
    }
}

void Painter::WriteText(Point position, std::string text) {
    sf::Text sfText(_font, text, 16);
    sfText.setPosition(sf::Vector2f(position.x * 20.f, position.y * 20.f));
    sfText.setFillColor(sf::Color::White);
    _window.draw(sfText);
}