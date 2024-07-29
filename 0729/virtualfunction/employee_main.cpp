#include <iostream>
#include <string>

#include "EmployManager.h"


using namespace std;
#include "employee.h"
#include "RegularEmployee.h"
#include "PartTimeEmployee.h"
int main(void)
{
	// ��� ��ü ����



	EmployeeManager employee_manager;

	for(int i =0; i<2; i++) {
		employee_manager.addEmployee(new RegularEmployee("������" + to_string(i), 1000+i,400+i*10));
	}
	for(int i =0; i<2; i++) {
		employee_manager.addEmployee(new PartTimeEmployee("��������"+ to_string(i+2), 2000+i, 1000+ 200*i));
	}

	employee_manager.showAllSalary();

	employee_manager.showTotalSalary();

	return 0;
}