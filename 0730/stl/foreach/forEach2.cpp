//
// Created by lee on 2024. 7. 30..
//


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){

    vector<int> v = {1,2,3,4,5};
    int external = 10;
    int sum = 0;
    for_each(v.begin(),v.end(), [&sum](int n){sum += n;});
    cout << sum << " " << endl;
}
