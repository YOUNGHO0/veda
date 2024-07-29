#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H

#include <iostream>
#include <string>
using namespace std;

// 사원 객체의 속성 및 제어를 위한 클래스
class Employee
{
protected:
	string name;		// 사원 이름
	int empNumber;		// 사번
	int salary;			// 월 급여
public:
	Employee(string name, int empNumber, int salary);
	Employee();
	virtual int getPay() const;
	virtual void showSalary() const;
	virtual ~Employee();
};
#endif