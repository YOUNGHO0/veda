//
// Created by lee on 2024. 7. 24..
//

#include "Date.h"

#include <iostream>
#include <string>
#include <vector>
using namespace  std;

Date::Date(int year, int month, int date) {

    this->year =year;
    this->month = month;
    this->date = date;
}

Date::Date(std::string s) {
    vector<string> result = split(s,"/");
    this->year = stoi(result[0]);
    this->month = stoi(result[1]);
    this->date = stoi(result[2]);

}

void Date::show() {
    Date my = *this;
    cout << to_string(my.year) + to_string(my.month) + to_string(my.date) << endl;

}


vector<string> Date::split(string input, string delimiter) {
    vector<string> ret;
    long long idx = 0;
    while((idx =input.find(delimiter)) != string::npos) {
        ret.push_back(input.substr(0,idx));
        input.erase(0,idx+delimiter.length());
    }
    ret.push_back(input);
    return ret;
}


int Date::getDay() {
    return date;

}
int Date::getYear() {
    return year;
}
int Date::getMonth() {
    return month;
}


