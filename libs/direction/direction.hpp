/**
 * @file direction.hpp
 * @brief Definitia enumeratiei Direction
 * @project SnakeGame
 * @author Numele Tau
 * @date 2024
 */
#pragma once
#include <iostream>

/**
 * @brief Directiile posibile de miscare ale sarpelui
 */
enum class Direction {
    Top,    ///< Sus
    Left,   ///< Stanga
    Right,  ///< Dreapta
    Bottom  ///< Jos
};

/** @brief Scriere in flux. @param out Flux. @param direction Directia. @return Flux */
std::ostream& operator<<(std::ostream& out, const Direction& direction);