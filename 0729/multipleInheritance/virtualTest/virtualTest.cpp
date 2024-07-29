//
// Created by lee on 2024. 7. 29..
//
#include <iostream>

using namespace std;
class A{
    public:
    void hello();
    ~A();
};

class B: public A{
    public :
    virtual void hello();
    virtual ~B();
};

class C: public B{
public:
    void hello();
    ~C();
};

void A::hello(){
cout <<" A hello " << endl;
}

A::~A(){
cout <<"소멸자 A 호출" << endl;
}

void B::hello(){
A::hello();
    cout << "B hello" << endl;
}

B::~B(){

cout << "소멸자 B 호출" << endl;
}

C::~C(){
cout << "소멸자 C 호출 "<< endl;
}
void C::hello(){
    cout << " C hello" << endl;
}




int main(){

    A* a = new C();
    B* b = static_cast<B*>(a);
    b->hello();      // "C hello" 출력, B의 hello()는 C에서 오버라이드됨
    // 메모리 해제
    delete b; // deleta a와 비교

    return 0;



}
