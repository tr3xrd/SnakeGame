/**
 * @file point.hpp
 * @brief Definitia structurii Point
 * @project SnakeGame
 * @author Numele Tau
 * @date 2024
 */
#pragma once
#include <iostream>

/**
 * @brief Structura care reprezinta un punct 2D cu coordonate intregi
 */
struct Point {
    int x; ///< Coordonata X
    int y; ///< Coordonata Y

    /** @brief Constructor. @param _x coord X. @param _y coord Y */
    Point(int _x = 0, int _y = 0);

    /** @brief Constructor de copiere. @param other Sursa */
    Point(const Point& other);

    /** @brief Operator atribuire. @param other Sursa. @return Copia */
    Point operator=(const Point& other);

    /** @brief Egalitate. @param other Al doilea punct. @return true daca egale */
    bool operator==(const Point& other) const;

    /** @brief Comparare. @param other Al doilea punct. @return true daca mai mic */
    bool operator<(const Point& other) const;
};

/** @brief Citire din flux. @param in Flux intrare. @param point Destinatie. @return Flux */
std::istream& operator>>(std::istream& in, Point& point);

/** @brief Scriere in flux. @param out Flux iesire. @param point Sursa. @return Flux */
std::ostream& operator<<(std::ostream& out, const Point& point);