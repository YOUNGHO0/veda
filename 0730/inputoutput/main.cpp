#include <iostream>
#include "Circle.h"
using namespace std;



std::istream& operator>> (std::istream& stream, Circle& circle) {

    return stream;
}

int main()
{


    cout << 30 << endl;

    cout.unsetf(ios::dec);
    cout.setf(ios::hex);

    cout << hex<< showbase << 30 << endl;
    cout << dec << showpos << 100<< endl;
    cout << true << ' ' << false << endl;
    cout << boolalpha << true << " "<<endl;

    cout << 30<< endl;
    Circle circle;
    std::cout << "Enter circle data:\n";
    std::cin >> circle;

    std::cout << "Circle Data:\n";
    std::cout << "Radius: " << circle.radius << "\n";

}
