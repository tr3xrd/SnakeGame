#include "game_engine.hpp"

GameEngine::GameEngine()
    : _window(sf::VideoMode({400, 400}), "Snake Game") {
    _painter = std::make_unique<Painter>(_window);
}

void GameEngine::Init() {
    // initializare snake, board, apple daca e nevoie
}

void GameEngine::Run() {
    while (_window.isOpen()) {
        while (const std::optional<sf::Event> event = _window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                _window.close();
            }

            if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>()) {
                if (keyPressed->scancode == sf::Keyboard::Scan::Up)
                    _snake.Move(Direction::Top);
                else if (keyPressed->scancode == sf::Keyboard::Scan::Down)
                    _snake.Move(Direction::Bottom);
                else if (keyPressed->scancode == sf::Keyboard::Scan::Left)
                    _snake.Move(Direction::Left);
                else if (keyPressed->scancode == sf::Keyboard::Scan::Right)
                    _snake.Move(Direction::Right);
            }
        }

        _window.clear(sf::Color::Black);
        // _painter->DrawImage(...) aici
        _window.display();
    }
}