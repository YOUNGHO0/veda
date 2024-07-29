//
// Created by lee on 2024. 7. 26..
//

#include "Human.h"


Human::Human() {
    cout << "기본 생성자 함수" << endl;
}

Human::Human( string &name, int age): name(name), age(age){
    cout << "Human 클래스 생성"<< endl;
    cout << name << " " << age << " " << endl;
    // this->name = name;
    // this->age = age;
}

void Human::show() const {
    std::cout << name << ": " << age << endl;
}

Human::~Human() {
    cout << "Human 소멸자 함수" << endl;
}
