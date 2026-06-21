#pragma once
#include <string>
#include "abstract_painter.hpp"

class Painter : public AbstractPainter {
public:
    virtual void DrawImage(Point topLeft, Point bottomRight, char** image);
    virtual void WriteText(Point position, std::string text);
};