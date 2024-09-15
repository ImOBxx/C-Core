#include <iostream>
using namespace std;

struct emp 
{
    private:
    int empid;
    string Ename;
    string deg;
    public:
    void add()
    {
        cout<<"Enter Employee Id";
        cin>>empid;
        cout<<"Enter Employee Name";
        cin>>Ename;
        cout<<"Enter Post";
        cin>>deg;
    }

    void display()
    {
        cout<<"Employee Id"<<empid<<endl;
        cout<<"Employee Name"<<Ename<<endl;;
        cout<<"Enter Post"<<deg<<endl;;
    }
};
int main()
{
emp e1;
e1.add();
e1.display();

    return 0;
}