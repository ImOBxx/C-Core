#include <iostream>
using namespace std;

class XYZ {
public:
    virtual void show() {
        cout << "I'm in XYZ" << endl;
    }
};

class ABC : public XYZ {
public:
    void show() override {
        cout << "I'm in ABC" << endl;
    }
};

int main() {
    XYZ* objp;  // Pointer to base class
    XYZ objp1;  // Instance of base class
    ABC objp2;  // Instance of derived class

    objp = &objp1;
    objp->show();  // Calls XYZ's show method

    objp = &objp2;
    objp->show();  // Calls ABC's show method (due to polymorphism)

    return 0;
}
