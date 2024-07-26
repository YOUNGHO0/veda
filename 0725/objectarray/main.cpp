#include <iostream>
class Circle {

    int radius;
public:
    Circle(int radius);
    void setRadius(int radius);
    int getArea();
};

void Circle::setRadius(int radius) {
    this->radius = radius;
}

int Circle::getArea() {

    int radius = this ->radius;
    return radius * radius * 3.14;
}
Circle::Circle(int radius) {
   this->radius = radius;
}


int main() {
    Circle circleArray[2][3] = {
        {Circle(10), Circle(20), Circle(30)},
        {Circle(40), Circle(50), Circle(60)}
    };


    Circle (*p)[3] = circleArray;



    for(int i =0; i<2; i++) {
        Circle * singleCirclePointer = *(circleArray+i);
        for(int j =0; j<3; j++) {
            std::cout << singleCirclePointer[j].getArea() << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
