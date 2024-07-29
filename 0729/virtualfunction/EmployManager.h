//
// Created by lee on 2024. 7. 29..
//

#ifndef EMPLOYMANAGER_H
#define EMPLOYMANAGER_H
#include <vector>
#include "employee.h"
class EmployeeManager {
private:
    std:: vector<Employee *> empList;
public:
    EmployeeManager();
    ~EmployeeManager();
    void addEmployee(Employee * emp);
    void showAllSalary() const;
    void showTotalSalary() const;
};

#endif //EMPLOYMANAGER_H
