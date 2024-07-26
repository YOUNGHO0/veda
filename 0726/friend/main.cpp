#include <iostream>

using namespace std;

class Rect;
bool equals(Rect r, Rect l);

class Rect {
    int width, height;
public:
    Rect(int width, int height){ this->width = width, this->height; }
    friend bool equals(Rect r, Rect l);
};

bool equals(Rect r, Rect s) {
    if(r.width == s.width && r.height == s.height) return true;
    return false;
}

int main() {

    Rect a(3,4), b(3,5);
    if(equals(a,b)) cout << "equal" << endl;
    else cout << "not equal" << endl;
    return 0;
}
