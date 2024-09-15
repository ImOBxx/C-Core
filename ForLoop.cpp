#include <iostream>
using namespace std;

int main()
{
    int x, y=2, f, i, j, sum = 0, n, k, p, term;
    cout << "Enter X: ";
    cin >> x;
    cout << "Enter nth: ";
    cin >> n;
    for (int i = 1; i <= n-1; i = i++)
    {
        
        p = pow(x, y);
        f = 1;

        cout << p << endl;
        for (j =1; j <= y; j++)
        {
            f = f * j;
            j++;
        }
        
        sum = sum+ p/f;
        cout << "Term " << i << ": " << sum << endl;  
        

        

    } 
}