/**
 * @file painter.hpp
 * @brief Definitia clasei Painter
 * @project SnakeGame
 * @author Numele Tau
 * @date 2024
 */
#pragma once
#include <string>
#include <SFML/Graphics.hpp>
#include "abstract_painter.hpp"

/**
 * @brief Clasa care deseneaza elementele jocului folosind SFML
 */
class Painter : public AbstractPainter {
    sf::RenderWindow& _window; ///< Fereastra SFML
    sf::Font _font;            ///< Fontul pentru text
public:
    /** @brief Constructor. @param window Fereastra SFML */
    Painter(sf::RenderWindow& window);

    /** @brief Deseneaza o imagine pe tabla. @param topLeft Coltul stanga-sus. @param bottomRight Coltul dreapta-jos. @param image Matricea de caractere */
    virtual void DrawImage(Point topLeft, Point bottomRight, char** image);

    /** @brief Scrie text pe ecran. @param position Pozitia textului. @param text Textul de afisat */
    virtual void WriteText(Point position, std::string text);
};