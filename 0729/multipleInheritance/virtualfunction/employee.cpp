#include "employee.h"

// ��� ��ü�� �Ӽ� �� ��� ���� Ŭ����
Employee::Employee(string name, int empNumber, int salary)
{
	this->name = name;
	this->empNumber = empNumber;
	this->salary = salary;
}

int Employee::getPay() const
{
	return salary;
}

void Employee::showSalary() const
{
	cout << "name : " << name;
	cout << "��� : " << empNumber;
	cout << " �� �޿� : " << getPay() << endl << endl;
}

Employee::~Employee() {
	cout << "�Ϲ� ����� �Ҹ��� ȣ��" << endl;
}
