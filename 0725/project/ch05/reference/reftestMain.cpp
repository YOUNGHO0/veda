//
// Created by lee on 2024. 7. 25..
//
#include <iostream>
using namespace std;

void swap(int &a, int &b){

    int tmp;
    tmp = a;
    a = b;
    b = tmp;


}



int main(){

    int n,m;
    int& ref = n;
    cout <<  &n << " ," << &ref << endl;

    m = 2;
    n = 9;
    swap(m,n);
    cout << m << " " << n << endl;

    return 0;
}
