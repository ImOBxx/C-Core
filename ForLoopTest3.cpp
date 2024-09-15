#include <iostream>
using namespace std;

int main()
{
    int i; 
    int k = 2;
    int pro = 1;
    for (i = 1; i <= 4; i++)
    {
        cout << k << "\t";
        pro = pro * k;
        k = k + 2;
    }
    cout << pro << endl;

}