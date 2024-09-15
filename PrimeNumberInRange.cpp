#include <iostream>
using namespace std;

int main()
{
    int s, e;
    cout << "Starting Point Of Range: ";
    cin >> s;
    cout << "Ending Point Of Range: ";
    cin >> e;
    int i;
    int j;
    int n;
    int count = 0;
    for (int i = s; i <= e; i++)
    {
        count=0;
       for (j = 1; j <= i; j++)
       {
        if (i % j == 0)
        {
            count++;
            
        }
        
       }
        if (count == 2)
       cout << i << "  is Prime Number" << "\n" << endl;
       else
       cout << i << "  is composite Number" << "\n" << endl;
    
       
    }
    cout << endl;
    return 0;

    }
