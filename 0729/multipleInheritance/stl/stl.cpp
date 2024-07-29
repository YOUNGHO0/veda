//
// Created by lee on 2024. 7. 29..
//


#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for(int i =0; i<v.size(); i++){
    cout << v[i] << " ";
    }
    cout << endl;

    v[0] = 10;
    int n = v[2];
    v.at(2) = 5;

    for(int i =0; i< v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}