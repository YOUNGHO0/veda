//
// Created by lee on 2024. 7. 29..
//

#ifndef REGULAREMPLOYEE_H
#define REGULAREMPLOYEE_H

#include "employee.h"

class RegularEmployee :public Employee{
protected:

int regularSalary;

public:
    RegularEmployee(string name, int empNumber, int regularSalary);
    void showSalary() const;
    int getPay() const override;
    virtual ~RegularEmployee();
};



#endif //REGULAREMPLOYEE_H
