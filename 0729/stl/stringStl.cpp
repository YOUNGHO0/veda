//
// Created by lee on 2024. 7. 29..
//

#include <bits/stdc++.h>

using namespace std;

int main() {

   vector<string> v;
   cout << "문자열 갯수 입력" << endl;

   int stringNumber;
   cin >> stringNumber;

   string temp;
   for(int i =0; i<stringNumber; i++){
   cin >> temp;
   v.push_back(temp);
   }

   for(auto i : v) cout << i << endl;
    return 0;
}