#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter String: ";
    getline(cin, str);
    string temp = str;
    string n = "";
    int x = str.length() - 1;
    while (x >= 0)
    {
        n = n + str[x];
        x--;
    }
    if (temp == n)
    {
      cout << "The String Is A Palindrome." << endl;
    }
    else 
    {
        cout << "The String Is Not A Palindrome. " << endl;
    }

}