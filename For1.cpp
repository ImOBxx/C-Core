#include <iostream>
using namespace std;

int main()
{
    string name = "vivekananda is great";
    int l;
    int i;
    l = name.size();
    cout << "Length " << l << endl;
    for (i = 0; i <= l; i++) {
    cout << name[i] << endl;

    }
    for (i = 0; name [i] != '\0'; i++)
    {
        cout << name[i] << endl;
    }

}