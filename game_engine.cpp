#include "game_engine.hpp"
#include <iostream>

GameEngine::GameEngine() : _status("ready") {}

void GameEngine::Init() {
    std::cout << "Game initialized. Status: " << _status << std::endl;
    std::cout << "Board: " << _board << std::endl;
    std::cout << "Snake: " << _snake << std::endl;
    std::cout << "Apple at: " << _apple << std::endl;
}

void GameEngine::Run() {
    _status = "running";
    std::cout << "Game running..." << std::endl;

    Direction dir = Direction::Right;
    std::cout << "Direction: " << dir << std::endl;

    _snake.Move(dir);
    std::cout << "After move: " << _snake << std::endl;
}