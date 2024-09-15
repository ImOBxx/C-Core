#include <iostream>
using namespace std;

int main()
{
    string wonder;
    int i;
    int pos;
    string a[] = {"Taj", "Wall", "Petra", "Macchu", "Chichen", "Colosseum", "Christ"};
    string b[] = {"India", "China", "Jordan", "Peru", "Mexico", "Italy", "Brazil"};
    bool found = false;
    cout <<"\n";
    cout << "Enter Name Of The Wonder: ";
    cin >> wonder;
    cout << "\n";
    size_t length = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < length; i++)
    {
        if (a[i] == wonder)
        {
          found = true;
          pos = i;
          break;
        }
    }
    if (found == true)
    {
        cout << "The Country Of This Wonder Is " << b[pos] << "." << endl;
    }
    else 
    {
        cout << "This Country Has Now Wonder. " << endl;
    }
    cout << "\n";
}