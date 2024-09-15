#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 1;
    int c;
    int n;
    cout << "\n";
    cout << "Enter Number: ";
    cin >> n;
    if (n == 1)
    {
        cout << a;
    }
    else if (n == 2)
    {
        cout << a << endl;
        cout << b << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        c = a + b;
        cout << c << endl;
        a = b;
        b = c;
        
    }
}