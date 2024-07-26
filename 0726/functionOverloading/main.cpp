#include <iostream>
#include <string>

using namespace std;

double getMin(double n1, double n2) {
    return (n1 < n2) ? n1 : n2;
}

string getMin(string s1, string  s2) {
    return (s1)< (s2) ? s1: s2;
}

int getMin(int array[], int size) {
    return *min_element(array,array+size);
}


int main() {

    int arr[10];

    for(int i =9; i>=0; i--) {
        arr[i] = i + 28;
    }

    cout << getMin(2.8 , 1.87) << endl;
    string s1 ="school";
    string s2 = "vacation";
    cout << getMin(s1, s2)<< endl;;
    cout << getMin(arr,10);
    return 0;
}
