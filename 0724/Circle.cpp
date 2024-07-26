#include <iostream>
#include "Circle.h"

Circle::Circle(int r) {
    radius = r;
}
Circle::Circle() {
    radius = 1;
}

double Circle::getArea() {
    return this->radius * this->radius * 3.14;
}

Circle::~Circle() {
    std::cout << radius <<  "소멸자 호출 " << std::endl;
}

void Circle::setRadius(int radius) {
    this->radius = radius;
}

int Circle::getNumberofCircles() {
    return numObject;
}

