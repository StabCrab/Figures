//
// Created by trykr on 21.01.2023.
//

#include "Circle.h"

Circle::Circle(sf::Color color) : Figure(color)
{
    shape = new sf::CircleShape(radius);
    shape->setFillColor(color);
}

Circle::~Circle()
{

}
