#include <iostream>
using namespace std;

int main()
{
    int temp;
    int arr[] = {2, 65, 23, 13, 18, 30, 46, 17, 52, 78};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; i++)
    {
         for (int j = 0; j < (n - 1) - i; j++)
         {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
         }
    }
    cout << "{";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "}";

}