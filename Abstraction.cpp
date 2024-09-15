#include <iostream>
using namespace std;
 
class ABC
{
    public:
    int a,b,c;
    virtual void display()=0;
    void add()
    {
        cout<<"Enter First Number";
        cin>>a;
        cout<<"Enter Second Number";
        cin>>b;
    }
   
};

class XYZ:public ABC 
{
    public:
    void display()
    {
        c=a+b;
        cout<<"Result"<<c;
    }

};

int main()
{
    
    XYZ xyx1;
    xyx1.add();
    xyx1.display();
    return 0;
}