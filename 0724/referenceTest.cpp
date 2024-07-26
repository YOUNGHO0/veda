//
// Created by lee on 2024. 7. 25..
//

#include "Circle.h"
#include <iostream>
using namespace std;
void increaseCircle(Circle & circle) {
    circle.radius = 400;
}


int main(){

   Circle waffle(30);

    Circle& test = waffle;

    increaseCircle(waffle);
    std::cout << waffle.getArea() << endl;
    return 0;
}
