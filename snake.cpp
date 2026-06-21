#include "snake.hpp"
#include <algorithm>
#include <iostream>

Snake::Snake() {
    _segments.push_back(Point(0, 0));
}

Snake::Snake(const Point& position) {
    _segments.push_back(position);
}

void Snake::Move(Direction direction) {
    Point head = _segments.front();

    if (direction == Direction::Top)    head.y -= 1;
    if (direction == Direction::Bottom) head.y += 1;
    if (direction == Direction::Left)   head.x -= 1;
    if (direction == Direction::Right)  head.x += 1;

    _segments.insert(_segments.begin(), head);
    _segments.pop_back();
}

void Snake::Eat(const Apple& apple) {
    _segments.push_back(apple.GetPosition());
}

int Snake::GetSize() const {
    return static_cast<int>(_segments.size());
}

Point Snake::GetPosition() const {
    return _segments.front();
}

bool Snake::ContainsPoint(const Point& p) const {
    return std::find(_segments.begin(), _segments.end(), p) != _segments.end();
}

std::ostream& operator<<(std::ostream& out, const Snake& snake) {
    out << "Snake size: " << snake.GetSize()
        << " Head: " << snake.GetPosition();
    return out;
}