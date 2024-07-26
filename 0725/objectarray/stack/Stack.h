//
// Created by lee on 2024. 7. 25..
//

#ifndef STACK_H
#define STACK_H




class Stack{
    int size;
    int top = -1; // 스택의 마지막 데이터
    int* buffer;

public:
    Stack();
    Stack(int size);
    ~Stack();
    bool pop(int& res);
    bool push(int input);
    int getSize();
    bool setSize(int size);
    int getTop();
    int getData(int index);
    Stack(const Stack& sobj);
};





#endif //STACK_H
