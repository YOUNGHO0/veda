//
// Created by lee on 2024. 7. 26..
//
#include <iostream>

class Point{

    int x,y;
public:
    Point();
    Point(int x, int y);
    void setXY(int x, int y);
    void show();
};

Point::Point() {
    x = y =0;
}


Point::Point(int x, int y){
    this->x = x;
    this->y = y;
}

void Point::setXY(int x , int y){



    if(x >1024) this->x = 1024;
    else {
        this->x = x;
    }

    if(y > 768) this->y = 768;
    else {
        this->y = y;
    }

}
void Point::show() {
    std::cout << "( " <<this->x << " " << this->y<< " )" << std::endl;
}


int main(){

    Point p1(100, 100);
    p1.show();

    p1.setXY(2000,1000);
    p1.show();

    Point p2;
    p2.setXY(512,1000);
    p2.show();


    return 0;
}