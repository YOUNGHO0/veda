//
// Created by lee on 2024. 7. 25..
//

#include "Person.h"

#include <iostream>
#include <string>

using namespace std;
Person::Person() { cout << "생성자 호출 " << endl;}
void Person::setName(string name){ this-> name = name;}
string Person::getName() { return name; }
Person::Person(std::string name) { this -> name = name;}
