#include <iostream>
using namespace std;

float si, p, r, t;

void input()
{
    cout << "Enter Principal: ";
    cin >> p;
    cout << "Enter Time: ";
    cin >> t;
    cout << "Enter Rate Of Interest: ";
    cin >> r;
}

void calculate()
{
    si = (p * r * t) / 100.0;
}

void display()
{
    cout << "The Simple Interest: " << si << endl;
}

int main()
{
    input();
    calculate();
    display();
}