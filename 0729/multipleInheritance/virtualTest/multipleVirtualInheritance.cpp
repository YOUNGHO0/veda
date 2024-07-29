//
// Created by lee on 2024. 7. 29..
//

#include <iostream>


using namespace std;

class Base{
public :
virtual void f(){ cout << "Base : f()  Called" << endl; }

};

class Derived : public Base {
public :
void f(){cout << "Derived::f() Called " << endl;}
};

class GrandDerived : public Derived{
public:
void f(){cout << "GrandDerived : f() called" << endl;};
};


int main(){

    GrandDerived g ;
    Base * bp;
    Derived * dp;
    GrandDerived *gp;
    bp = dp = gp = &g;

    bp ->f();
    dp ->f();
    gp ->f();
}
