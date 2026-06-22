#include <cassert>
#include <iostream>
#include "../libs/point/point.hpp"
#include "../libs/apple/apple.hpp"
#include "../libs/board/board.hpp"
#include "../libs/snake/snake.hpp"

void TestPoint() {
    Point p(3, 4);
    assert(p.x == 3 && p.y == 4);
    Point p2 = p;
    assert(p2 == p);
    Point p3(1, 2);
    assert(!(p == p3));
    std::cout << "TestPoint: OK\n";
}

void TestApple() {
    Apple a(Point(5, 5));
    assert(a.GetPosition() == Point(5, 5));
    Apple a2 = a;
    assert(a2 == a);
    std::cout << "TestApple: OK\n";
}

void TestBoard() {
    Board b(10, 20);
    assert(b.GetWidth() == 10);
    assert(b.GetHeight() == 20);
    Board b2 = b;
    assert(b2 == b);
    std::cout << "TestBoard: OK\n";
}

void TestSnake() {
    Snake s(Point(5, 5));
    assert(s.GetPosition() == Point(5, 5));
    assert(s.GetSize() == 1);
    s.Move(Direction::Right);
    assert(s.GetPosition() == Point(6, 5));
    s.Move(Direction::Bottom);
    assert(s.GetPosition() == Point(6, 6));
    Apple a(Point(7, 6));
    s.Eat(a);
    assert(s.GetSize() == 2);
    assert(s.ContainsPoint(Point(7, 6)));
    std::cout << "TestSnake: OK\n";
}

int main() {
    TestPoint();
    TestApple();
    TestBoard();
    TestSnake();
    std::cout << "Toate testele au trecut!\n";
    return 0;
}