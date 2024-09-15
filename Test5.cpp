#include <iostream>
using namespace std;

class Point {
private:
    static int x; // Declaration of static member variable

public:
    Point() {
        x = 0;
    }

    void incr() {
        x++;
    }

    void print() {
        cout << "x: " << x << endl;
    }
};

// Definition of static member variable outside the class
int Point::x;

int main() {
    Point p1;
    p1.incr();
    p1.print(); // Output will be: x: 1

    Point p2;
    p2.incr();
    p2.print(); // Output will be: x: 2, since x is static and shared across all instances

    return 0;
}
