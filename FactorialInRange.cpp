#include <iostream>
using namespace std;

int main()
{
   int s, e;
   int n;
   int f;
   cout << "Enter Starting Point: ";
   cin >> s;
   cout << "Enter Ending Point: ";
   cin >> e;
   if (n == 1 || n == 0){
       cout << 1 << endl;
   }
   else {
    cout << n * f * (n - 1);
   }
   cout << "Factorials in the range " << s << " to " << endl << ":" << endl;
    for (int i = s; i <= e; ++i) {
        cout << "Factorial of " << i << " = " << f * i << endl;
    }
    
}  