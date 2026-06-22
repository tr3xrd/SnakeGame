/**
 * @file board.hpp
 * @brief Definitia clasei Board
 * @project SnakeGame
 * @author Numele Tau
 * @date 2024
 */
#pragma once
#include <iostream>

/**
 * @brief Clasa care reprezinta tabla de joc cu latime si inaltime
 */
class Board {
    int _width;  ///< Latimea tablei
    int _height; ///< Inaltimea tablei
public:
    /** @brief Constructor. @param width Latime. @param height Inaltime */
    Board(int width = 20, int height = 20);

    /** @brief Constructor de copiere. @param other Sursa */
    Board(const Board& other);

    /** @brief Returneaza latimea. @return Latimea tablei */
    int GetWidth() const;

    /** @brief Returneaza inaltimea. @return Inaltimea tablei */
    int GetHeight() const;

    /** @brief Operator atribuire. @param other Sursa. @return Copia */
    Board operator=(const Board& other);

    /** @brief Egalitate. @param other A doua tabla. @return true daca egale */
    bool operator==(const Board& other) const;
};

/** @brief Citire din flux. @param in Flux. @param board Destinatie. @return Flux */
std::istream& operator>>(std::istream& in, Board& board);

/** @brief Scriere in flux. @param out Flux. @param board Sursa. @return Flux */
std::ostream& operator<<(std::ostream& out, const Board& board);