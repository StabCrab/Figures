#include <iostream>
#include <SFML/Graphics.hpp>
#include "MainWindow.h"
int main()
{
    const int width = 1000;
    const int height = 1000;

    MainWindow window(width, height);

    while(window.isOpen())
    {
        window.show();
    }
}