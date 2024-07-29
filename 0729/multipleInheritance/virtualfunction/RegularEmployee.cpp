//
// Created by lee on 2024. 7. 29..
//

#include "RegularEmployee.h"

RegularEmployee::RegularEmployee(string name, int empNumber, int regularSalary):Employee(name,empNumber,regularSalary) {
    this->regularSalary = regularSalary;
}


void RegularEmployee::showSalary() const{
    cout << "정규직 사용자" << endl;
    cout << "name : " << name <<  " ";
    cout << "사번 : " << empNumber ;
    cout << " 정규직 월 급여 : " << regularSalary << endl << endl;

}

int RegularEmployee::getPay() const {
    return this->regularSalary;
}

RegularEmployee::~RegularEmployee() {
    cout << "정규직 사용자 소멸자 호출 "<<endl;
}
