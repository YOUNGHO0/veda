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
    Circle operator+(Circle & obj); //radius + radius

    bool operator==(const Circle & obJj) ; // radius == radDius

    // bool operator==(Circle & obJj) ; // radius == radDius


    Circle& operator+=(Circle & obj); // radius + obj.radius
    Circle& operator+=(int radius);
    Circle operator+(int radius);

    friend std::ostream& operator<<(std::ostream& os, const Circle& circle);
    // ostream.operator(<<).(Circle & circle)

};
#endif //CIRCLE_H
