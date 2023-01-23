//
// Created by trykr on 21.01.2023.
//

#include "Rectangle.h"

Rectangle::Rectangle(sf::Color color) : Figure(color)
{
    shape = new sf::RectangleShape(sf::Vector2f(200, 100));
    shape->setFillColor(color);
}

Rectangle::~Rectangle() {

}
