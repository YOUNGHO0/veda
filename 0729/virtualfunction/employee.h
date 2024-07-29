#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H

#include <iostream>
#include <string>
using namespace std;

// ��� ��ü�� �Ӽ� �� ��� ���� Ŭ����
class Employee
{
protected:
	string name;		// ��� �̸�
	int empNumber;		// ���
	int salary;			// �� �޿�
public:
	Employee(string name, int empNumber, int salary);
	Employee();
	virtual int getPay() const;
	virtual void showSalary() const;
	virtual ~Employee();
};
#endif