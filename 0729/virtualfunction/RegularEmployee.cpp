//
// Created by lee on 2024. 7. 29..
//

#include "RegularEmployee.h"

RegularEmployee::RegularEmployee(string name, int empNumber, int regularSalary):Employee(name,empNumber,regularSalary) {
    this->regularSalary = regularSalary;
}


void RegularEmployee::showSalary() const{
    cout << "������ �����" << endl;
    cout << "name : " << name <<  " ";
    cout << "��� : " << empNumber ;
    cout << " ������ �� �޿� : " << regularSalary << endl << endl;

}

int RegularEmployee::getPay() const {
    return this->regularSalary;
}

RegularEmployee::~RegularEmployee() {
    cout << "������ ����� �Ҹ��� ȣ�� "<<endl;
}
