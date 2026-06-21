#pragma once
#include <string>
#include <memory>
#include "apple.hpp"
#include "snake.hpp"
#include "board.hpp"

class GameEngine {
    Apple _apple;
    Snake _snake;
    Board _board;
    std::string _status;
public:
    GameEngine();
    void Init();
    void Run();
};