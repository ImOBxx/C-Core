#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string str = "cpp strings exercise";
    str[0] = toupper(str[0]);

    for(int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            str[i + 1] = toupper(str[i + 1]);
            
        }
    }
    cout << str << endl;
    return 0;
}