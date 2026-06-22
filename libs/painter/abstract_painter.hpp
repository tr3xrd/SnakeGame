/**
 * @file abstract_painter.hpp
 * @brief Interfata abstracta pentru desenare
 * @project SnakeGame
 * @author Numele Tau
 * @date 2024
 */
#pragma once
#include <string>
#include "../point/point.hpp"

/**
 * @brief Interfata abstracta pentru desenarea elementelor jocului
 */
struct AbstractPainter {
    /** @brief Deseneaza o imagine. @param topLeft Coltul stanga-sus. @param bottomRight Coltul dreapta-jos. @param image Matricea de caractere */
    virtual void DrawImage(Point topLeft, Point bottomRight, char** image) = 0;

    /** @brief Scrie text. @param position Pozitia. @param text Textul */
    virtual void WriteText(Point position, std::string text) = 0;
};