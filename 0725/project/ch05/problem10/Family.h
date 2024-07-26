//
// Created by lee on 2024. 7. 25..
//

#ifndef FAMILY_H
#define FAMILY_H
#include "Person.h"

class Family{

    Person *personPointer;
    int size;
    string familyName;
public:
    Family(string name, int size);
    void show();
    void setName(int pos , string name);
    ~Family();
};



#endif //FAMILY_H
