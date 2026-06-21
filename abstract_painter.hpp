#pragma once
#include <string>
#include "point.hpp"

struct AbstractPainter {
    virtual void DrawImage(Point topLeft, Point bottomRight, char** image) = 0;
    virtual void WriteText(Point position, std::string text) = 0;
};