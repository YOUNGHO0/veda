//
// Created by lee on 2024. 7. 25..
//

#include "Family.h"

#include <iostream>


Family::Family(string name, int size) {
    this->familyName = name;
    this->size =size;
    this->personPointer = new Person[size];

}

void Family::show() {
    cout << this->familyName << " 가족은 다음과 같이 " << this->size << " 명 입니다" << endl;
    for(int i =0; i<size; i++) {
        cout << personPointer[i].getName() << " ";
    }
}

Family::~Family() {
    delete []personPointer;
}

void Family::setName(int pos, string name) {
    this->personPointer[pos].setName(name);
}






