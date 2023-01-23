//
// Created by trykr on 21.01.2023.
//

#ifndef JOBTASK_FIGURE_H
#define JOBTASK_FIGURE_H

#include "SFML/Graphics.hpp"
const int radius = 100;

enum class Figures
{
    Square = 0,
    Rectangle,
    Circle,
    Octagon
};

Figures & operator++(Figures & value) noexcept;
Figures & operator--(Figures & value) noexcept;

class Figure
{
protected:
    sf::Shape* shape;
public:
    virtual ~Figure();
    Figure(sf::Color color);
    sf::Shape* getShape();
    void setPosition(sf::Vector2f pos);
};


#endif //JOBTASK_FIGURE_H
