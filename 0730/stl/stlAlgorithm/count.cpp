//
// Created by lee on 2024. 7. 30..
//
#include "iostream"

using namespace std;

int main(){

    int myints[] = {10,20,30,40,50};
    int myCount = std::count(myints, myints+5,20);
    cout << myCount << endl;
    return 0;
}
