#include <iostream>
using namespace std;

int main()
{
    cout << "\n";
    cout << "TABLES" << endl;
    int t, a, b, c, e, s, n = 1, sum, i, j;
    cout << "\n";
    cout << "Enter Starting Point: ";
    cin >> s;
    cout << "\n";
    cout << "Enter Ending Point: ";
    cin >> e;
    cout << "\n";
    cout << "Tables From " << s << " To " << e << endl;
    cout << "\n" << endl;
    for (int i = s; i <= e; i++)
    {
      for (int j = 1; j <= 10; j++)
      {
        if (j == 1)
         {
            cout << "\n";
            cout << "Tables of " << i << ":" "\n" << endl;
            
         }
         else {
            cout << " " << endl;
         }
         n = i * j;
         cout << i << " x " << j << " = " << n << "\n" << endl; 
         
         

      }
        
    }
      
}