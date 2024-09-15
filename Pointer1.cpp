#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b=20;
    int c;
    c=(*(&a))+ (*(&b));
     
    cout << &a << endl;
    cout << &b << endl;
    cout << &c << endl;
    cout << "C = " << c << endl;
    
}