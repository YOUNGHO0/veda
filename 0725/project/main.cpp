#include <iostream>
#include <vector>

using namespace std;
std::vector<std::string> split(string input, string delimiter) {
    vector<string> ret;
    long long pos = 0;
    string token = "";
    while ((pos = input.find(delimiter)) != string::npos) {
        token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos + delimiter.size());
    }
    ret.push_back(input);     return ret;
}


int main() {
    std::cout << "Hello, World!" << std::endl;

    std::string myString = "Hello, World!";

    std::cout << "Using size(): " << myString.size() << std::endl;
    std::cout << "Using length(): " << myString.length() << std::endl;

    for(string temp : split("HEllo world", " ")) {
        cout << temp << endl;
    }

    int a  = 3;
    int &b = a;
    if( &a == &b) cout << "동일";
    return 0;
}
