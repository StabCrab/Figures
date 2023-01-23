cmake_minimum_required(VERSION 3.15)
project(JobTask)

set(CMAKE_CXX_STANDARD 14)

add_executable(JobTask main.cpp MainWindow.cpp MainWindow.h Figure.cpp Figure.h Circle.cpp Circle.h Square.cpp Square.h Rectangle.cpp Rectangle.h Octagon.cpp Octagon.h)

set(SFML_ROOT "C:/Libraries/SFML")

set(CMAKE_MODULE_PATH "C:/Libraries/SFML/lib/cmake/SFML")
find_package(SFML 2.5.1 COMPONENTS graphics network audio window system )

include_directories(C:/Libraries/SFML/include/SFML)
target_link_libraries(JobTask C:/Libraries/SFML/lib sfml-graphics sfml-network sfml-audio sfml-window sfml-system)