//
// Created by lee on 2024. 7. 29..
//

#include "PartTimeEmployee.h"

PartTimeEmployee::PartTimeEmployee(string name, int empNumber, int parTimeSalary): Employee(name,empNumber,parTimeSalary) {
    this->parTimeSalary = parTimeSalary;
}


void PartTimeEmployee::showSalary() const {
    cout << "��Ʈ Ÿ�� �����" << endl;
    Employee::showSalary();
    // cout << "name : " << name <<  " ";
    // cout << "��� : " << empNumber ;
    // cout << " �������� �� �޿� : " << parTimeSalary << endl << endl;

}

int PartTimeEmployee::getPay() const {
    return parTimeSalary;
}

PartTimeEmployee::~PartTimeEmployee() {
    cout << "�������� ����� �Ҹ��� ȣ��" << endl;
}
