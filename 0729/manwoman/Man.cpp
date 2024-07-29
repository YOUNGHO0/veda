//
// Created by lee on 2024. 7. 26..
//

#include "Man.h"

Man :: Man() {
    cout << "Man기본 생성자" << endl;
}
Man::Man(string name, int age)
{
    cout << "Man 생성자 함수 (매개변수) " << endl;
    cout << "이미 초기화 됨 "<<this->age << " " << this ->name << endl;
    this ->name = name;
    this ->age = age;
}

void Man::show() const {
    cout << "나이 :" << this->age<<endl;
    cout << "남자" << endl;
}

Man::~Man() {
    cout << "Man 소멸자 함수 " << endl;
}
