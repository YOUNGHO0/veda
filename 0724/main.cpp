#include <iostream>
#include <string>
using namespace std;
int main()
{

    int number;

    int total;

    for(int i =0; i<10; i++) {
        cin >> number;
        total += number;
    }

    cout << total /(float)10;

}
