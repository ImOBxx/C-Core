#include <iostream>
using namespace std;
void swap(int a, int b)
{
int temp;
cout<<"original value"<<a<<b<<"in swap function"<<endl;

temp=a;
a=b;
b=temp;
cout<<"After swapping value"<<a<<b<<"in swap function"<<endl;
}
int main()
{

int a=10,b=20;
cout<<"original value"<<a<<b<<"in main function"<<endl;
swap(a,b);
cout<<"After swapping value"<<a<<b<<"in main function"<<endl;
    return(0);
}