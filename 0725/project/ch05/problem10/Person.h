//
// Created by lee on 2024. 7. 25..
//

#ifndef PERSON_H
#define PERSON_H
#include <string>

using namespace std;

class Person{

    string name;
public:
    Person();
    void setName(string name);
    string getName();
    Person(string name);
};

#endif //PERSON_H
