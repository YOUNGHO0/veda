//
// Created by lee on 2024. 7. 25..
//
#include <iostream>
using namespace std;
int main() {
    cout << "배열 크기 입력"<<endl;
    int number;
    cin >> number;
    int * numberArr = new int[number];

    for(int i =0; i< number; i++) {

        cin >> numberArr[i];
    }

    int total =0;
    for(int i =0; i<number; i++) total += numberArr[i];

    cout << total << endl;
    delete [] numberArr;
    numberArr = NULL;
    return 0;

}