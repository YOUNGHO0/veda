//
// Created by lee on 2024. 7. 30..
//
#include <iostream>
using namespace std;

void f(const int &n){
    cout << n << endl;
    // n = 20;
}


void f(int &n){
    cout << n << endl;
    n = 20;
}

void f(int &&n){
    cout << n << endl;
    n = 20;
}

int main(){


    int n ;
    int &lref = n;
    n = 10;
    cout << lref << endl;
    f(n);
    const int& cref = 5;
    //cref =10; const라서 변경 불가
    f(5);



    return 0;
}