//
// Created by lee on 2024. 7. 26..
//
#include "Woman.h"
Woman::Woman(string name, int age) :Human(name,age) {

}

void Woman::show() const {
    std::cout << "나이 " << this ->age << std::endl;
    std::cout << "여성 " << std::endl;
}

Woman::~Woman() {
    cout << "woman" << endl;
}
