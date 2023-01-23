//
// Created by trykr on 21.01.2023.
//

#ifndef JOBTASK_MAINWINDOW_H
#define JOBTASK_MAINWINDOW_H


#include <Graphics/RenderWindow.hpp>
#include "Figure.h"
class MainWindow
{
private:
    Figures currentFigure;
    Figure* figure;
    sf::RenderWindow* window;
    void draw();
    int currentColorNumber;
    std::array<sf::Color, 5> colors;

    void changeCurrentColorLeft();
    void changeCurrentColorRight();
    void changeCurrentFigureUp();
    void changeCurrentFigureDown();
    void setFigure(Figures figureEnum);
public:
    MainWindow(int width, int height);
    ~MainWindow();
    void show();
    bool isOpen();
};


#endif //JOBTASK_MAINWINDOW_H
