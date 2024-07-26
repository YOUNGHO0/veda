//
// Created by lee on 2024. 7. 24..
//
# pragma once

#ifndef CIRCLE_H
#define CIRCLE_H


class Circle {
public:
    int radius;
    double getArea();
    void setRadius(int radius);
    static int numObject;
    Circle();
    Circle(int r);
    ~Circle();
    static int getNumberofCircles();
};
#endif //CIRCLE_H
