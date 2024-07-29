//
// Created by lee on 2024. 7. 29..
//

#include "PartTimeEmployee.h"

PartTimeEmployee::PartTimeEmployee(string name, int empNumber, int parTimeSalary): Employee(name,empNumber,parTimeSalary) {
    this->parTimeSalary = parTimeSalary;
}


void PartTimeEmployee::showSalary() const {
    cout << "파트 타임 사용자" << endl;
    Employee::showSalary();
    // cout << "name : " << name <<  " ";
    // cout << "사번 : " << empNumber ;
    // cout << " 비정규직 월 급여 : " << parTimeSalary << endl << endl;

}

int PartTimeEmployee::getPay() const {
    return parTimeSalary;
}

PartTimeEmployee::~PartTimeEmployee() {
    cout << "비정규직 사용자 소멸자 호출" << endl;
}
