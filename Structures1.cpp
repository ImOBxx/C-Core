#include <iostream>
using namespace std;

struct emp 
{
    public:
    int empid;
    string Ename;
    string deg;
    public:
    void add();
    void display();
    
};
emp e1;

void add()
    {
        
        cout<<"Enter Employee Id";
        cin>>e1.empid;
        cout<<"Enter Employee Name";
        cin>>e1.Ename;
        cout<<"Enter Post";
        cin>>e1.deg;
    }

    void display()
    {
        cout<<"Employee Id"<<e1.empid<<endl;
        cout<<"Employee Name"<<e1.Ename<<endl;;
        cout<<"Enter Post"<<e1.deg<<endl;;
    }
int main()
{

add();
display();

    return 0;
}