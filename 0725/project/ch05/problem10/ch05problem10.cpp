//
// Created by lee on 2024. 7. 25..
//
#include <iostream>
#include "Family.h"
using namespace std;





int main(){

    Family * simpson = new Family("Simpson",3);
    cout << "setName실행전 " <<endl; ?\>
    simpson-> setName(0, "Mr Simpson");
    simpson-> setName(1, "Mrs Simpson");
    simpson-> setName(2, "bart simpson");

    simpson->show();
    return 0;

}