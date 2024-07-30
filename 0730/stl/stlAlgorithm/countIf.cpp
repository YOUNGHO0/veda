//
// Created by lee on 2024. 7. 30..
//
#include <iostream>
#include <vector>

using namespace  std;

class Circle{
public:
    int radius;
    Circle();
    Circle(int radius);
};

Circle::Circle() {
}

Circle::Circle(int radius): radius(radius){
}

bool comp(Circle &a, Circle &b) {
    return a.radius < b.radius;
}


int main() {




    vector<Circle> myVector;


    for(int i =0; i<5; i++) {
        cout << "원 반지름 입력" << endl;
        int radius;
        cin >> radius;
        Circle c(radius);
        myVector.push_back(c);
    }

    int num = count_if(myVector.begin(), myVector.end(), [](Circle  c){ return c.radius>10;});

    cout << num << endl;


    return 0;
}
