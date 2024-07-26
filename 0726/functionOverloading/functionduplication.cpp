//
// Created by lee on 2024. 7. 26..
//

#include <iostream>

using namespace std;

int add(int a, int b){
    return a + b;
}
int add(int a , int &b){
    return a+10*b;
}
int main(){

    int s = 10;
    int t = 20;
    cout << add(s,t)<< endl;
    return 0;
}