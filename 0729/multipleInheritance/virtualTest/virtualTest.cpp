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
cout <<"�Ҹ��� A ȣ��" << endl;
}

void B::hello(){
A::hello();
    cout << "B hello" << endl;
}

B::~B(){

cout << "�Ҹ��� B ȣ��" << endl;
}

C::~C(){
cout << "�Ҹ��� C ȣ�� "<< endl;
}
void C::hello(){
    cout << " C hello" << endl;
}




int main(){

    A* a = new C();
    B* b = static_cast<B*>(a);
    b->hello();      // "C hello" ���, B�� hello()�� C���� �������̵��
    // �޸� ����
    delete b; // deleta a�� ��

    return 0;



}
