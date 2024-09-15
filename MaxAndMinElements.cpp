#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Array Length: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        cout << "Enter Values: ";
        cin >> arr[i];
    }
    int max_element = arr[0];
    int min_element = arr[0];
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] > max_element)
        {
            max_element = arr[i];
        }

        if (arr[i] < min_element)
        {
            min_element = arr[i];
        }

    }
    cout << "Max Element: " << max_element << endl;
    cout << "Min Element: " << min_element << endl;

}