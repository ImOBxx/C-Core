#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int sum = 0;
    int f = 1;
    int m = 0;

    for (int i = 1; i <= n; i++)
    {
        f = (f * i);
        if (n % 2 == 0)
        {
        cout << " 1 / " << f << " + " << endl;
        }
        else if (n % i == 1)
        {
            cout << " ";
        }
    
    
    }
}