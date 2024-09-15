#include <iostream>
using namespace std;

int main()
{
    float i;
    float k = 2;
    float m = 0;
    float sum = 0.0;
    for (int i = 1; i <= 4; i++)
    {
        m = 1 / k;
        if(i==4)
        {
            cout <<"1/"<<k<< "\t";
            
        }
        else
        {
        cout <<"1/"<<k<< " + " << "\t";
        }
        k = k + 2;
    }
    
} 