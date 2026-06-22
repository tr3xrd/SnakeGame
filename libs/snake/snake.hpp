/**
 * @file snake.hpp
 * @brief Definitia clasei Snake
 * @project SnakeGame
 * @author Numele Tau
 * @date 2024
 */
#pragma once
#include <vector>
#include "apple.hpp"
#include "direction.hpp"
#include "point.hpp"

/**
 * @brief Clasa care reprezinta sarpele din joc
 *
 * Sarpele este format din segmente si se poate misca
 * in 4 directii, poate manca mere si creste in lungime.
 */
class Snake {
    std::vector<Point> _segments; ///< Lista de segmente ale sarpelui
public:
    /** @brief Constructor implicit. Sarpele incepe la (0,0) */
    Snake();

    /** @brief Constructor cu pozitie. @param position Pozitia initiala */
    Snake(const Point& position);

    /** @brief Misca sarpele. @param direction Directia de miscare */
    void Move(Direction direction);

    /** @brief Sarpele mananca un mar si creste. @param appleArul mancat */
    void Eat(const Apple& apple);

    /** @brief Returneaza numarul de segmente. @return Lungimea sarpelui */
    int GetSize() const;

    /** @brief Returneaza pozitia capului. @return Point cu pozitia capului */
    Point GetPosition() const;

    /** @brief Verifica daca un punct e in sarpe. @param p Punctul. @return true daca e in sarpe */
    bool ContainsPoint(const Point& p) const;
};

/** @brief Scriere in flux. @param out Flux. @param snake Sarpele. @return Flux */
std::ostream& operator<<(std::ostream& out, const Snake& snake);