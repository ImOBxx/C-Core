#include <iostream>
using namespace std;

int main()
{
    int s;
    int e;
    cout << "Enter Starting Point: ";
    cin >> s;
    cout << "Enter Ending Point: ";
    cin >> e;
    for (int i = s; i <= e; i++)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
          if (i % j == 0)
          {
            count++;
          }
        }
    if (count == 2)
    {
        cout << "Prime Number: " << i << endl;
    }
   
        
    }
}