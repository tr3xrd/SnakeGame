#pragma once
#include <string>
#include <memory>
#include "SFML-3.1.0/include/SFML/Graphics.hpp"
#include "libs/apple/apple.hpp"
#include "libs/snake/snake.hpp"
#include "libs/board/board.hpp"
#include "libs/painter/painter.hpp"

class GameEngine {
    Apple _apple;
    Snake _snake;
    Board _board;
    std::string _status;
    sf::RenderWindow _window;
    std::unique_ptr<Painter> _painter;
public:
    GameEngine();
    void Init();
    void Run();
};