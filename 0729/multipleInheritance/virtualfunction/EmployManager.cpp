//
// Created by lee on 2024. 7. 29..
//

#include "EmployManager.h"


void EmployeeManager::addEmployee(Employee *emp) {

    this->empList.push_back(emp);

}

void EmployeeManager::showAllSalary() const {
   vector<Employee *> :: const_iterator it;
    for( it = empList.begin(); it != empList.end(); it++) (*it)->showSalary();
}

void EmployeeManager::showTotalSalary() const {
    int sum = 0;
    for(auto i : empList){
    sum += i->getPay();
    }
    cout << "±Þ¿©ÃÑÇÕ " << sum << endl;
}

EmployeeManager::~EmployeeManager(){

    for(int i=0; i<empList.size(); i++){
        delete empList[i];
    }
}

EmployeeManager::EmployeeManager() {

}




