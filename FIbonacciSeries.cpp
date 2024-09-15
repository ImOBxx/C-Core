#include <iostream>
using namespace std;

int main()
{
   int a = 0;
   int b = 1;
   int c;
   int num;
   cout << "Enter Nth Number: ";
   cin >> num;  
   cout << a << endl;
   cout << b << endl;
   for (int i = 3; i <= num; i++)
   {
    c = a + b;
    cout << c << endl;
    a = b;
    b = c;
   }
}
