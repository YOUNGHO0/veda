//
// Created by lee on 2024. 7. 26..
//

#ifndef COLORPOINT_H
#define COLORPOINT_H
#include "Point.h"
using namespace std;

class  Colorpoint : public Point {
    std::string color;
public:
    Colorpoint();
    void setColor(std::string color);
    bool equals( Colorpoint p);
    void showColorPoint();
    ~Colorpoint();
};


#endif //COLORPOINT_H
