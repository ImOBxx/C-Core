#include <iostream>
using namespace std;
int a, b, c, d;
void input(int p,int q, int r) 
 {   
    a = p;
    b = q;
    c = r;


}

void calculate()
{
d=a + b + c;
}

void display()
{
    cout<<"Addition="<< d;
}

int main()
{
int x,y, z;
 cout<<"enter First Number:";
 cin>>x;
    
 cout<<"enter Second Number:";
  cin>>y;
  cout << "Enter Third Number: ";
  cin >> z;   
 input(x,y, z);
 calculate();
 display();   
 return 0;
}
