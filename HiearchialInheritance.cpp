#include <iostream>
using namespace std;

class A
{
    public:
    int a, b;
    A (int a, int b)
    {
        this -> a = a;
        this -> b = b;
    }

};

class B
{   public:
    int c, d;
    B (int c, int d) 
    {
        this -> c = c;
        this -> d = d;
    }
};

class C:  public A, public B
{
    public:
    int sum;
    C (int a1,int b1,int c1,int d1):A(a1,b1),B(c1,d1)
    {

    }


    void calc()
    {
    sum=a+b+c+d;
    cout<<"Sum:"<<sum;
    }
    
};

int main()
{
 C obj(10,20,30,40);
 obj.calc();   
}