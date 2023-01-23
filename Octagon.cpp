//
// Created by trykr on 21.01.2023.
//

#include "Octagon.h"

Octagon::Octagon(sf::Color color) : Figure(color)
{
    shape = new sf::CircleShape(radius,8);
    shape->setFillColor(color);
}

Octagon::~Octagon()
{

}
