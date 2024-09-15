#include <iostream>
using namespace std;

int main()
{
    int small;
    int temp;
    int arr[] = {2, 65, 23, 13, 18, 30, 46, 17, 52, 78};
    int n = sizeof (arr) / sizeof (arr[0]);
    for (int i = 0; i < n - 1; i++)
    {
        small = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[small])
            {
                small = j;
            }
        }
        if (i != small)
        {
            temp = arr[i];
            arr[i] = arr[small];
            arr[small] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
