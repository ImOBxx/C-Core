#include <iostream>
using namespace std;

int main() {
    int n = 8;
    int sum = 0;
    int f = 1;
    int m;

    for (int i = 1; i <= n; ++i) {
        f = f * i; 

        
        if (i % 2 == 0)
        {
            cout << "1 /" << f << " + " << "\t";
        }
        else 
        {
            cout << " " << endl;
        }
       
        }
    

    

    return 0;
}