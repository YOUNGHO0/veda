#include "employee.h"

// 사원 객체의 속성 및 제어를 위한 클래스
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
	cout << "사번 : " << empNumber;
	cout << " 월 급여 : " << getPay() << endl << endl;
}

Employee::~Employee() {
	cout << "일반 사용자 소멸자 호출" << endl;
}
