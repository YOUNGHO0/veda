//
// Created by lee on 2024. 7. 30..
//

#include <iostream>
#include <map>
using namespace std;

int main(){

    int x = 10;
    int y = 20;

    // 캡처 리스트가 빈 경우
    auto lambda1 = []() {
        cout << "No external variables captured." << endl;
    };

    auto lambda2 = [](int &x, int &y) {
        cout << x <<" "<< y<< endl;
    };

    auto lambda3 = [x,y]() {
        cout << x <<" "<< y<< endl;
    };

    auto lamba4 = [&]() {
        cout << x << " "<< y << endl;
    };

    lambda1();
    lambda2(x,y);
    lambda3();
    x = 20;
    y = 30;

    lamba4();

    double pi = 3.14;

    auto calc =[&pi](int r){
    pi = 5;
return pi *r *r;};

    cout << pi << endl;
    cout << "면적은 " <<calc(3);
}