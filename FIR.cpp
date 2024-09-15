#include <iostream>
using namespace std;

// Function to calculate factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int start, end;
    
    // Taking input of range from the user
    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;
    
    // Printing factorial for each number in the range
    cout << "Factorials in the range " << start << " to " << end << ":" << endl;
    for (int i = start; i <= end; ++i) {
        cout << "Factorial of " << i << " = " << factorial(i) << endl;
    }
    
    return 0;
}
