//
// Created by lee on 2024. 7. 26..
//

#ifndef POINT_H
#define POINT_H
#include <iostream>

class Point {
protected:
    int x,y;
public:
    Point();
    Point(int x, int y);
    void set(int x, int y);
    void showPoint() const;
    ~Point();
};

#endif //POINT_H
