#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter String: ";
    getline(cin, str);
    string n = "";
    int x = str.length() - 1;
    while (x >= 0)
    {
        n = n + str[x];
        x--;
        cout << n << endl;
    }
    cout << n << endl;

}
