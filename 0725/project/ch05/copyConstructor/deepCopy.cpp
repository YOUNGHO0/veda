//
// Created by lee on 2024. 7. 25..
//


#include <iostream>

using namespace std;

class Test {
    int n;
public:
    Test(int n);
    int getTest(){return n; };

};

Test::Test(int n) { this-> n;}

int main(){


    int num(10);
    int num2(num);


    Test t1(20);
    Test t2(t1);

    cout << t1.getTest() << ", " << t2.getTest() << endl;


}
