#include <iostream>
using namespace std;
class relative
{
 public:   
void closeRelative();

};



class myfriend
{
    public:
    int p;
void add(int a,int b);
friend void sub(int x, int y);
};

void relative::closeRelative()
{
cout<<"Welcome You"<<endl;
}
 void myfriend::add(int a,int b)
{
    int c;
    c=a+b;
    cout<<"sum"<<c<<endl;

}
void sub(int x,int y)
{
    myfriend obj;
    obj.p=10;
    int c=x-y;
    cout<<"Subtraction"<<c<<endl;
}


int main()
{
    myfriend obj;
    obj.add(11,12);
    obj.p=12;
    relative obj1;
    obj1.closeRelative();
    sub(12,11);
return(0);
}