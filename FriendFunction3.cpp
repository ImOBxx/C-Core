#include <iostream>
using namespace std;

class ABC
{
   private: 
   int a,b;
   public:
   void OB();
   friend void k();    
   
};
void ABC::OB()
{
    int c;
    a=100;
    b=200;
    c=a+b;
    cout<<"Add"<<c<<endl;
}

void k()
{
    ABC obj;
    obj.a=10;
    obj.b=20;
    int c;
    c=obj.a+obj.b;

}

/*void l()
{
ABC obj1;
obj1.a=12;
}*/

int main()
{
    ABC abc1;
    

    return 0;
}
