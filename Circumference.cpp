#include <iostream>
using namespace std;


float r, c;

void input(int x)
{
     r = x;
}

void calculations()
{
    c = 2 * 3.14 * r;
}
void show ()
{
   cout << "Circumference of the Circle: " << c << endl;
   cout << "\n";
}

int main()
{
   int a;
   cout << "\n";
   cout << "CIRCLE";
   cout << "\n";
   cout << "Enter Radius: ";
   cin >> a;
   input (a);
   calculations ();
   show();
   return 0;
}