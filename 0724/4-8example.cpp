//
// Created by lee on 2024. 7. 25..
//

#include <iostream>
#include "Circle.h"

using namespace  std;
int main() {

    int rad;

    cin >> rad;
    Circle *c = new Circle(rad);

    cout << c->getArea();
    return 0;
}