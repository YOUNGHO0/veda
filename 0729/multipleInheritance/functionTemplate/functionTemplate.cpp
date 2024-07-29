//
// Created by lee on 2024. 7. 29..
//
#include <iostream>
#include "circle.h"
using namespace std;
template<class  T>
void mySwap(T & a , T & b){

    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}


int main(){

    int a = 4;
    int b = 5;
    mySwap(a,b);
    cout << "a=" << a << "," << "b=" << b << endl;

    double c= 0.3,d = 12.5;
    mySwap(d,c);


    cout << "c=" << c << "," << "d=" << d << endl;



}