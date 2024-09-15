#include <iostream>
using namespace std;

int main() {
    string str = "C++ is a general-purpose programming language";
    int st = 0;
    int x = str.length() - 1;
    
    for (int i = 0; i <= x; i++) {
        char ch = str[i];
        
        if (ch == ' ' || i == x) { // Handle the last word
            if (i == x && ch != ' ') {
                i++; // Include the last character
            }
            
            cout << "ST: " << st << endl;
            cout << "I: " << i << endl;
            string n = str.substr(st, i - st); // Correct length calculation
            cout << n << endl;
            st = i + 1;
        }
    }
    
    return 0;
}
