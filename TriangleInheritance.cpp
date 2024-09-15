#include <iostream>
using namespace std;

class Values
{
    public:
    float a;
    float b;
    float c;
  /*  Values(float a, float b, float c)
    {
        this -> a = a;
        this -> b = b;
        this -> c = c;
    }*/ 
    void input()
    {
    a=10;
    b=20;
    c=30;
    }

};

class Cals : public Values
{
    public:
    float s;
    Cals ()    
    {
       input();
    }

    void calc()
    {
        s=a+b+c/2;
    }
    

};

class CalArea:public Cals
{
    public :
    void dispArea()
    {
    float a1=s*(s-a)*(s-b)*(s-c);
    float area=sqrt(a1);
    cout<<"Area of Triangle"<<area;
    }

};

int main()
{
CalArea obj;
obj.calc();
obj.dispArea();
return 0;
}