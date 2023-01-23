//
// Created by trykr on 21.01.2023.
//

#include "Square.h"

Square::Square(sf::Color color) : Figure(color)
{
    shape = new sf::CircleShape(radius,4);
    shape->setRotation(45);
    shape->setFillColor(color);
}

Square ::~Square()
{

}