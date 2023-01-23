//
// Created by trykr on 21.01.2023.
//

#include "Figure.h"

Figures & operator++(Figures & value) noexcept
{
    switch (value)
    {
        case Figures::Square:
            value = Figures ::Rectangle;
            break;
        case Figures :: Rectangle:
            value = Figures :: Circle;
            break;
        case Figures :: Circle:
            value = Figures::Octagon;
            break;
        case Figures :: Octagon:
            value = Figures::Square;
            break;
    }
    return value;
}

Figures & operator--(Figures & value) noexcept
{
    switch (value)
    {
        case Figures::Square:
            value = Figures ::Octagon;
            break;
        case Figures :: Rectangle:
            value = Figures :: Square;
            break;
        case Figures :: Circle:
            value = Figures::Rectangle;
            break;
        case Figures :: Octagon:
            value = Figures::Circle;
            break;
    }
    return value;
}

Figure::~Figure()
{
    delete shape;
}

Figure::Figure(sf::Color color)
{

}

sf::Shape *Figure::getShape()
{
    return shape;
}

void Figure::setPosition(sf::Vector2f pos)
{
    shape->setPosition(pos);
}

