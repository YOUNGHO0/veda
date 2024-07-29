//
// Created by lee on 2024. 7. 26..
//

#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
#include <string>
using namespace std;
class Human{
protected:
    std::string name;
    int age;

public:
    Human();
    Human(std::string& name, int age);
    virtual void show() const;
    virtual ~Human();
};

#endif //HUMAN_H
