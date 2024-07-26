#include <iostream>


#include "Circle.h"

using namespace std;
int Circle::numObject = 0;
int main(){


    cout << "hello"<< endl;
     Circle *p = new Circle[10];
     cout << "생존하고 있는 원의 개수 = " << Circle::getNumberofCircles()<< endl;

    delete []p;
    cout << "생존하고 있는 원의 갯수 " << Circle::getNumberofCircles() << endl;

     Circle a;
     cout << "생존하고 있는 원의 개수 = " << Circle::getNumberofCircles() << endl;

     Circle b;
     cout << "생존하고 있는 원의 갯수=" << Circle::getNumberofCircles() << endl;

    return 0;
}