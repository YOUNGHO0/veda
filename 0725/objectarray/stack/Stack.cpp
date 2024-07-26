//
// Created by lee on 2024. 7. 25..
//

#include "Stack.h"

#include <cstring>
#include <iostream>


Stack::Stack(){
    this->size = 10;
    this->buffer = new int[10];
    std::cout << "생성자 호출 완료" <<std::endl;
}

Stack::~Stack(){
    std::cout << "소멸자 호출";
    delete [] buffer;

}

int Stack::getSize(){
    return size;
}

bool Stack::push(int input){
    top++;
    if(top >= size) {
        setSize(this->size*2);
    }
    buffer[top] = input;

    return true;
 }

int Stack::getData(int index) {
    return buffer[index];
}

bool Stack::setSize(int size){

    if(this->size >= size) {
        return false;
    }
    int* temp = new int[size] ;
    if(temp == NULL) return false;
    memcpy(temp,this->buffer, sizeof(int)*(top+1));
    delete [] buffer;
    buffer = temp;
    this->size = size;
    std::cout << "메모리 복사 성공" <<std::endl;

    return true;

}
bool Stack::pop(int & res){
    if(this->top <0) return false;
    res= buffer[top--];
    return true;
}

int Stack::getTop() {
    return top;
}

Stack::Stack(int size) {
    this->size = size;
    buffer = new int[size];
    if(buffer == NULL) {
        std::cout << "동적 할당에 실패했습니다 " <<  std::endl;
    }
}

Stack::Stack(const Stack & sobj) {
    this -> size = sobj.size;
    this-> top = sobj.top;
    this ->buffer = new int[sobj.size];
    memcpy(this->buffer,sobj.buffer, sizeof(int)*sobj.size );
}
