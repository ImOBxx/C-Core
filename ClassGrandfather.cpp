#include <iostream>
using namespace std;

// Base class Grandfather
class Grandfather {
protected:
    int a, b, c;

public:
    // Constructor to set the values
    Grandfather(int x, int y, int z) : a(x), b(y), c(z) {}

    // Virtual function show
    virtual void show() {
        cout << "Values in Grandfather class: a = " << a << ", b = " << b << ", c = " << c << endl;
    }
};

// Derived class Child
class Child : public Grandfather {
public:
    // Constructor to initialize the base class
    Child(int x, int y, int z) : Grandfather(x, y, z) {}

    // Overriding the show method
    void show() override {
        // Call the show method of the base class
        Grandfather::show();
        
        // Add and display the sum of a, b, and c
        int sum = a + b + c;
        cout << "Sum of a, b, and c in Child class is: " << sum << endl;
    }
};

int main() {
    // Create an instance of Child
    Grandfather* ptr = new Child(10, 20, 30);
    
    // Call the show method through the pointer
    ptr->show();
    
    // Clean up
    delete ptr;
    
    return 0;
}