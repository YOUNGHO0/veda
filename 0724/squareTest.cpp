//
// Created by lee on 2024. 7. 24..
//
#include <iostream>

class Rectangle {
public:
    int width;
    int height;
    int getArea();
    Rectangle();
    Rectangle(int width, int height);
    Rectangle(int width);
    bool isSquare();
};
Rectangle::Rectangle() {
    this->width = 1;
    this->height = 1;
}

Rectangle::Rectangle(int width) {
    this->width = width;
    this->height = width;
}

int Rectangle::getArea() {
    return width *height;
}


Rectangle::Rectangle(int width, int height) {
    this->width = width;
    this->height = height;
}

bool Rectangle::isSquare() {

    Rectangle my = *this;
    if(my.width == my.height) return true;

    return false;
}



int main() {

    Rectangle rect1;
    Rectangle rect2(3,5);
    Rectangle rect3(3);

    if(rect1.isSquare()) std::cout << "rect1 은 정사각형이다" << std::endl;
    if(rect2.isSquare()) std::cout << "rect2 는 정사각형이다 " << std::endl;
    if(rect3.isSquare()) std::cout << "rect3 는 정사각형이다 " << std::endl;


}