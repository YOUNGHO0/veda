//
// Created by lee on 2024. 7. 26..
//

#include "Man.h"

Man::Man(string name, int age):Human(name,age) {

}

void Man::show() const {
    cout << "나이 :" << this->age<<endl;
    cout << "남자" << endl;
}

Man::~Man() {
}
