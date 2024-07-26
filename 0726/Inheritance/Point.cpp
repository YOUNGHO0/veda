//
// Created by lee on 2024. 7. 26..
//

#include "Point.h"

#include <iostream>
using namespace std;

Point::Point() {
    this->x =10;
    this->y = 10;
    cout << "기본 클래스 생성자 호출 " <<endl;
}

Point::Point(int x, int y) {
    this ->x = x;
    this ->y = y;
    cout << "기본 클래스 호출" <<endl;
}

void Point::set(int x, int y) { this->x= x , this-> y= y; }

void Point::showPoint() const {
    std::cout << "(" << x << ", " << y<< ")" << std::endl;
}

Point::~Point() {
    cout << "Point 소멸자 호출" <<endl;
}
