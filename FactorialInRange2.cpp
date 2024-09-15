#include <iostream>
using namespace std;

int main()
{
    cout << "\n";
    cout << "FACTORIALS!" << endl;
    int s, e, i, j, f = 1;
    cout << "\n";
    cout << "Enter Starting Point: ";
    cin >> s;
     cout << "\n";
    cout << "Enter Ending Point: ";
    cin >> e;
     cout << "\n";
    for (int i = s; i <= e; i++)
    {
        f = 1;
        for (j = 1; j <= i; j++)
        {
           f = f * j;
        }
         cout << "\n";
        cout << "Factorial Of " << i << " = " << f << endl;
         cout << "\n";
    }

}