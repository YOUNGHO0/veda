
// Created by lee on 2024. 7. 25..
//

#ifndef STACK_H
#define STACK_H

#include <cstring>
#include <iostream>
//

template <class T>
class Stack{
    int size;
    int top = -1; // 스택의 마지막 데이터
    T* buffer;

public:
    Stack();
    explicit Stack(int size);
    ~Stack();
    bool pop( T & res);
    bool push(T input);
    int getSize();
    bool setSize(int size);
    int getTop();
    T getData(int index);
    Stack(const Stack& sobj);
};



template <class T>
Stack<T>::Stack() : size(10), top(-1) {
    buffer = new T[size];
    std::cout << "생성자 호출" << std::endl;
}

template <class T>
Stack<T>::Stack(int size) : size(size), top(-1) {
    buffer = new T[size];
    if (buffer == nullptr) {
        std::cerr << "동적 할당에 실패했습니다" << std::endl;
     }
}

template <class T>
Stack<T>::~Stack() {
    std::cout << "소멸자 호출" << std::endl;
    delete[] buffer;
}

template <class T>
bool Stack<T>::push(T input) {
    if (top + 1 >= size) {
        if (!setSize(size * 2)) return false;
    }
    buffer[++top] = input;
    return true;
}

template <class T>
bool Stack<T>::pop(T &res) {
    if (top < 0) return false;
    res = buffer[top--];
    return true;
}

template <class T>
int Stack<T>::getSize() {
    return size;
}

template <class T>
bool Stack<T>::setSize(int newSize) {
    if (newSize <= size) return false;
    T* temp = new T[newSize];
    if (temp == nullptr) return false;
    std::memcpy(temp, buffer, sizeof(T) * (top + 1));
    delete[] buffer;
    buffer = temp;
    size = newSize;
    std::cout << "메모리 복사 성공" << std::endl;
    
    return true;
}

template <class T>
int Stack<T>::getTop() {
    return top;
}

template <class T>
T Stack<T>::getData(int index) {
    if (index < 0 || index > top) throw std::out_of_range("Index out of range");
    return buffer[index];
}

template <class T>
Stack<T>::Stack(const Stack& sobj) : size(sobj.size), top(sobj.top) {
    buffer = new T[size];
    if (buffer == nullptr) {
        std::cerr << "동적 할당에 실패했습니다" << std::endl;
        size = 0;
        top = -1;
        return;
    }
    std::memcpy(buffer, sobj.buffer, sizeof(T) * size);
}

#endif //STACK_H