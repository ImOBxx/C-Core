#include <iostream>
using namespace std;

int main()
{
    int i, n, r, count = 0;
    cout << "Enter Number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        r = n % i;
        if (r == 0)
        count++;
        cout << r << endl;
    }
}