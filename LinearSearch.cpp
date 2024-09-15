#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int sData;
    int pos;
    bool found = false;
    size_t length = sizeof(a) / sizeof(a[0]);
    cout << length << endl;
    cout << "Enter Data To Be Searched In Array: ";
    cin >> sData;
    for (int i = 0; i < 5; i++)
    {
      if (a[i] == sData)
      {
        found  = true;
        pos=i+1;
        break;
      }
    }
    if (found == true)
    {
        cout << "Data Found at position ."<< pos <<endl;
    }
    else
    {
        cout << "Data Not Found. " << endl;
    }


}