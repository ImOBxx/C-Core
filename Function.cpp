#include <iostream>
using namespace std;
int a,b,c;
void input()
{
    
    cout<<"enter First Number:";
    cin>>a;
    
    cout<<"enter Second Number:";
    cin>>b;


}

void calculate()
{
c=a+b;
}

void display()
{
    cout<<"Addition="<<c;
}

int main()
{
 input();
 calculate();
 display();   
 return 0;
}