#include <iostream>
#include <cmath>
using namespace std;

int l, b, h, v;

void input(int l2, int b2, int h2)
{
    l = l2;
    b = b2;
    h = h2;
}

void calculation()
{
    v = (l * b * h);
}

void show()
{
    cout << "\n" << endl;
    cout << "Volume Of The Cuboid: " << v << "cm³" << endl;
    cout << "\n" << endl;
}

int main()
{
    cout << "\n" <<endl;
    cout << "~  CUBOID  ~" << "\n" << endl;
    int l1, b1, h1;
    cout << "Enter The Length of the Cuboid: " << "cm³" << endl;
    cin >> l1;
    cout << "Enter The Breadth of the Cuboid: " << "cm³" << endl;
    cin >> b1;
    cout << "Enter The Height of the Cuboid: " << "cm³" << endl;
    cin >> h1;
    cout << "\n" << endl; 
    input (l1, b1, h1);
    calculation();
    show();
    return 0;
}

