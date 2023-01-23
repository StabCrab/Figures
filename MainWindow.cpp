//
// Created by trykr on 21.01.2023.
//

#include "MainWindow.h"
#include "Graphics.hpp"
#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Octagon.h"
MainWindow::MainWindow(int width, int height)
{
    window = new sf::RenderWindow(sf::VideoMode(width,height), "Task");
    colors[0] = sf::Color::Red;
    colors[1] = sf::Color::Green;
    colors[2] = sf::Color::Blue;
    colors[3] = sf::Color::Yellow;
    colors[4] = sf::Color::Magenta;
    currentColorNumber = 0;
    currentFigure = Figures::Square;
    figure = new Square(colors[currentColorNumber]);
    figure->setPosition(sf::Vector2f(200,200));
}

void MainWindow::show()
{
    sf::Event event{};
    while (window->pollEvent(event)) // We check for events
    {
        if (event.type == sf::Event::Closed)
        {
            window->close();
            return;
        }
        if (event.type == sf::Event::KeyPressed)
        {
            if (event.key.code == sf::Keyboard::Left)
            {
                changeCurrentColorLeft();
            }
            if (event.key.code == sf::Keyboard::Right)
            {
                changeCurrentColorRight();
            }
            if (event.key.code == sf::Keyboard::Up)
            {
                changeCurrentFigureUp();
            }
            if (event.key.code == sf::Keyboard::Down)
            {
                changeCurrentFigureDown();
            }
        }
    }
    window->clear(sf::Color(0,0,0)); // Clear the whole window before rendering a new frame
    draw();
    window->display();

}



bool MainWindow::isOpen() {
    return window->isOpen();
}

MainWindow::~MainWindow()
{
    delete window;
    delete figure;
}

void MainWindow::draw()
{
    window->draw(*figure->getShape());
}

void MainWindow::changeCurrentColorLeft()
{
    currentColorNumber = currentColorNumber - 1;
    if (currentColorNumber == -1)
        currentColorNumber = colors.size() - 1;
    else
        currentColorNumber %= colors.size();
    figure->getShape()->setFillColor(colors[currentColorNumber]);
}

void MainWindow::changeCurrentColorRight()
{
    currentColorNumber = currentColorNumber + 1;
    currentColorNumber %= colors.size();
    figure->getShape()->setFillColor(colors[currentColorNumber]);
}

void MainWindow::changeCurrentFigureUp()
{
    ++currentFigure;
    setFigure(currentFigure);
}

void MainWindow::changeCurrentFigureDown()
{
    --currentFigure;
    setFigure(currentFigure);
}

void MainWindow::setFigure(Figures figureEnum)
{
    delete figure;
    switch (figureEnum)
    {
        case Figures::Square:
            figure = new Square(colors[currentColorNumber]);
            break;
        case Figures::Rectangle:
            figure = new Rectangle(colors[currentColorNumber]);
            break;
        case Figures::Circle:
            figure = new Circle(colors[currentColorNumber]);
            break;
        case Figures::Octagon:
            figure = new Octagon(colors[currentColorNumber]);
            break;
    }
    figure->setPosition(sf::Vector2f(200,200));
}

