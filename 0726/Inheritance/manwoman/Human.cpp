//
// Created by lee on 2024. 7. 26..
//

#include "Human.h"


Human::Human() {}

Human::Human( string &name, int age) {
    this->name = name;
    this->age = age;
}

void Human::show() const {
    std::cout << name << ": " << age << endl;
}
