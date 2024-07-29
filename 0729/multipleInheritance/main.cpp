#include <iostream>

class BaseId {
public:
    int mode;
};

class In : virtual public BaseId {
public:
    int readPos;
};

class Out : virtual public BaseId {
public:
    int writePos;
};

class InOut : public In, public Out {
public :
    bool safe;
};


int main() {
    InOut ioobj;
    ioobj.readPos = 10;
    ioobj.writePos = 20;
    ioobj.safe = true;
    ioobj.mode = 5;
    return 0;
}
