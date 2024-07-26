#include <iostream>
#include "Circle.h"

int Circle::numObject = 0;

Circle::Circle(int r) {
    radius = r;
    numObject++;
}
Circle::Circle() {
    radius = 1;
    numObject++;
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

Circle Circle::operator+(Circle &obj) {
    std::cout << "클래스 내부 객체" << std::endl;
    return Circle(obj.radius + this->radius);
}

Circle &Circle::operator+=(Circle &obj) {
    this-> radius += obj.radius;
    return *this;
}

Circle & Circle::operator+=(int radius) {

    this ->radius += radius;
    return *this;
}

Circle Circle::operator+(int radius) {
    std::cout << "operator 실행 " << std::endl;
    return Circle(this->radius + radius);
}

bool Circle::operator==(const Circle &obJj)  {
    if(this->radius == obJj.radius) return true;
    return false;

}
//
// bool Circle::operator==(Circle &obJj) {
//     if(this->radius == obJj.radius) return true;
//     return false;
// }



