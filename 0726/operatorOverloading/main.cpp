#include <iostream>

#include "Circle.h"

using namespace std;

std::ostream & operator<<(std::ostream &os, const Circle &circle) {

    os << "Circle(radius: " << circle.radius << ")"<<std::endl;
    // ostream.operator(<<).(Circle & circle)
    return os;
}

int main() {
    Circle a(3) , b(5), c;
    c = a+b ;
    if(c == a)
        cout << "Same" << endl;
    else
        cout << "Differ" << endl;

    if( c ==(a+3))
        cout << "Same" << endl;
    else
        cout << "Differ" << endl;


    cout << a;
    // (ostream)cout.<<(a);



    return 0;


}
