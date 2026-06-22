/**
 * @file apple.hpp
 * @brief Definitia clasei Apple
 * @project SnakeGame
 * @author Numele Tau
 * @date 2024
 */
#pragma once
#include <iostream>
#include "point.hpp"

/**
 * @brief Clasa care reprezinta un mar pe tabla de joc
 */
class Apple {
    Point _position; ///< Pozitia marului
public:
    /** @brief Constructor implicit. Pozitia (0,0) */
    Apple();

    /** @brief Constructor cu pozitie. @param position Pozitia marului */
    Apple(const Point& position);

    /** @brief Constructor de copiere. @param other Sursa */
    Apple(const Apple& other);

    /** @brief Returneaza pozitia marului. @return Point cu pozitia */
    Point GetPosition() const;

    /** @brief Operator atribuire. @param other Sursa. @return Copia */
    Apple operator=(const Apple& other);

    /** @brief Egalitate. @param other Al doilea mar. @return true daca egale */
    bool operator==(const Apple& other) const;
};

/** @brief Citire din flux. @param in Flux. @param apple Destinatie. @return Flux */
std::istream& operator>>(std::istream& in, Apple& apple);

/** @brief Scriere in flux. @param out Flux. @param apple Sursa. @return Flux */
std::ostream& operator<<(std::ostream& out, const Apple& apple);