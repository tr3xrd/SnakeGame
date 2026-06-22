#pragma once
#include <string>
#include <SFML/Graphics.hpp>
#include "abstract_painter.hpp"

class Painter : public AbstractPainter {
    sf::RenderWindow& _window;
    sf::Font _font;
public:
    Painter(sf::RenderWindow& window);
    virtual void DrawImage(Point topLeft, Point bottomRight, char** image);
    virtual void WriteText(Point position, std::string text);
};