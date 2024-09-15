#include <iostream> 
using namespace std;

int main()
{   
    string country;
    int i;
    int pos;
    string a[] = {"India", "China", "Jordan", "Peru", "Mexico", "Italy", "Brazil"};
    string b[] = {"Taj", "Wall", "Petra", "Macchu", "Chichen", "Colosseum", "Christ"};
    bool found = false;
    cout << "\n";
    cout << "Enter Country Name To Get Wonder: ";
    cin >> country;
    cout << "\n";
    size_t length = sizeof(a) / sizeof(a[0]);
    for (i = 0; i < length; i++)
    {
       if (a[i] == country)
       {
        found=true;
        pos=i;
        break;

       }

    }
 if (found==true)
 {
    cout<<"Wonder In This Country Is "<< b[pos] << endl;
 }   
 else
 {
    cout<<"No Wonder In This Country" << endl;
 }
 cout << "\n";
}