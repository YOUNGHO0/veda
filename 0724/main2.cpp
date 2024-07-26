//
// Created by lee on 2024. 7. 24..
//
#include  <iostream>
#include <string>

using  namespace std;
struct CUSTOMER {

    string name;
    int age;
    char gender;
};



int main() {

    cout << "고객 정보 입력" << endl;

    CUSTOMER customer[3];

    for(int i =0; i<3; i++) {

        cout << "이름 입력 " << endl;
        cin >> customer[i].name;
        cout << "나이 입력"<< endl;
        cin >> customer[i].age;
        cout << "성별 출력 " << endl;
        cin >> customer[i].gender;
    }

    for(int i =0; i<3; i++) {

        cout << "이름 " << customer[i].name << endl;
        cout << "나이 "<< customer[i].age << endl;

    }


    return 0;
}