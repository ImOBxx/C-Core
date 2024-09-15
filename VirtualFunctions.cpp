#include <iostream>
using namespace std;

class ABC
{
   public:
   virtual void display()
   {
      cout << "Hello From ABC" << endl;
   }

};

class XYZ : public ABC
{
    public:
    void display()
    {
         cout << "Hello From XYZ" << endl;
    }
};

int main()
{
    ABC *obj1;
    ABC obj2;
    XYZ childobj;
    obj1=&childobj;
    obj1->display();
    obj1=&obj2;
    obj1->display();
}