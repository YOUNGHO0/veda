//
// Created by lee on 2024. 7. 25..
//

#include <iostream>

using namespace std;

int main(){

    string s1;
    string s2("Hello c++");

    cout << s1.length() << " " << s1.size() << ", " << s1.capacity() << endl;

    cout << s2.length() << " " << s2.size() << ", " << s2.capacity() << endl;

    s2.replace(0,3, "1");
    cout << s2 << endl;
    cout << s2.at(2) << " " << s2[2] << endl;
    return 0;

}