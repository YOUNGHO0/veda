//
// Created by lee on 2024. 7. 29..
//

#ifndef PARTTIMEEMPLOYEE_H
#define PARTTIMEEMPLOYEE_H

#include "employee.h"

class PartTimeEmployee :public Employee{
protected:

    int parTimeSalary;

public:
    PartTimeEmployee(	string name, int empNumber, int parTimeSalary);
    void showSalary() const override;
    int getPay() const override;
    virtual ~PartTimeEmployee();
};

#endif //PARTTIMEEMPLOYEE_H
