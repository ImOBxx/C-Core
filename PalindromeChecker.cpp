#include <iostream>
using namespace std;

int main()
{
    cout << "\n";
    int n;
    cout << "Enter Number: ";
    cin >> n;
    int sum = 0;
    int temp = n;
    int r;
    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
        if (sum == temp)
        {
            cout << "Is a Palindrome" << "\n";
        }
        else
        {
            cout << "Is not a Palindrome" << "\n";
        }
    }
}