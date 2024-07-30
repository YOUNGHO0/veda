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

    sort(myVector.begin(),myVector.end(),comp);

    for(auto i : myVector) {
        cout << i.radius << endl;
    }



 return 0;
}
