//
// Created by lee on 2024. 7. 24..
//

#ifndef DATE_H
#define DATE_H
#include <vector>


using namespace std;

class Date {

public:
    int year;
    int month;
    int date;
    vector<string> split(string input, string delimiter);
    int getYear();
    int getMonth();
    int getDay();
    Date(int year, int month, int date);
    Date(std::string s);

    void show();
};

#endif //DATE_H