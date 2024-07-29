//
// Created by lee on 2024. 7. 29..
//

#include <iostream>
#include "stack.h"
using namespace std;

int main(){

    Stack<int> myStack(20);

    myStack.push(3);
    int num;
    myStack.pop(num);

    for(int i =0; i<40; i++) {
        myStack.push(i);
        cout << myStack.getSize()<< endl;
    }
    return 0;
}
