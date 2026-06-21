#include "game_engine.hpp"
#include <iostream>

GameEngine::GameEngine() : _apple(Point{5, 5}), _snake(Point{0, 0}), _board(20, 20) {}

void GameEngine::Init() {
    std::cout << "Joc Snake initializat. Tabla: "
               << _board.GetWidth() << "x" << _board.GetHeight() << std::endl;
}

void GameEngine::Run() {
    std::cout << "Pozitia initiala a sarpelui: ("
               << _snake.GetPosition().x << ", " << _snake.GetPosition().y << ")" << std::endl;
    std::cout << "Pozitia marului: ("
               << _apple.GetPosition().x << ", " << _apple.GetPosition().y << ")" << std::endl;

    _snake.Move(Direction::Right);
    std::cout << "Sarpele s-a deplasat. Noua pozitie: ("
               << _snake.GetPosition().x << ", " << _snake.GetPosition().y << ")" << std::endl;
}