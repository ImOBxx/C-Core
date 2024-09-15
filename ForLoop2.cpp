#include <iostream>
using namespace std;

int main()
{
    float x, y = 2, j, n, p, f=1, sum = 0;
    int i;

    cout << "Enter X: ";
    cin >> x;
    cout << "Enter n: ";
    cin >> n;
    for (i = 1; i <= n - 1; i++)
    {
        p = pow (x, y);
        
        for (j = 1; j <= y; j++)
        {
            f = f * j;
        }
        cout << "Term" << (p / f) << endl ;
        if (i % 2 != 0)
        {
            sum = sum - (p / f);
        }
        else 
        {
            sum = sum + (p / f);
        }
        y = y + 2;
        cout << "series sum" << 1 + sum;
    }
}