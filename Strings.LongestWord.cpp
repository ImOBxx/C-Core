#include <iostream> 
using namespace std;

int main()
{
    string str = "C++ is a general-purpose programming language";
    int st = 0;
    int ii;
    int x = str.length() - 1;
    string f;
    string n = str.substr(4, 2);
    cout << n << endl;
    int len = 0;

    for (int i = 0; i <= x; i++)
    {
        char ch = str[i];
      
        if (ch == ' ' || i == x)
        { 
            //cout<< "ch: " << ch <<endl;
            //cout << "ST: " << st <<  endl;
            //cout << "I:" << i << endl;
            string n = str.substr(st, i - st);
            cout<< n <<endl;
            st = i + 1;
            ii = n.size();
            cout << ii << endl;
            if (ii > len)
            {
               len = ii;
               f = n;
            }
        }
    }
    
    //cout << "Longest Word: " << f << endl;
    
}

