#include <iostream>
using namespace std;

int main()
{
    int i;
    int k = 2;
    int sum = 0;
    for (i = 1; i <= 4; i++)
    {
        cout << k << "\t";
        sum = sum + k;
        k = k + 2;
    }
}