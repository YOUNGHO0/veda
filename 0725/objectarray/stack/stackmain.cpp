//
// Created by lee on 2024. 7. 25..
//

#include <iostream>

#include "Stack.h"





using namespace  std;


void showDtata(Stack & s1) {


  for(int i =0; i<=s1.getTop(); i++) {

      cout << s1.getData(i)<< endl;
  }
}


int main(){

   Stack s1(5);
   s1.push(123);
   s1.push(456);
   s1.push(1434);

    Stack s2(s1);
    int res;
    s1.pop(res);
    s1.pop(res);
    showDtata(s2);

    int count;
    cin >> count;

    return 0;
}