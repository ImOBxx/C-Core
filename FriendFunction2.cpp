#include <iostream>
using namespace std;

class India
{
    int a;
    public:
    void Maharashtra();
    friend void Japan();

};


class Russia
{
    public:
   void Moscow();


};

void pak()
{

}

void India:: Maharashtra()
{
    cout << "Welcome To Mumbai." << endl;
}

void Japan()
{
    India obj;
    obj.a=12;
    cout <<  "Welcome To Osaka" << endl;
}

/*void Nepal()
{
    India obj;
    obj.a // Not accessble since not friend and not member
}*/

void Russia:: Moscow()
{
   cout << "Welcome To Moscow. " << endl;
}



int main()
{
India obj;
obj.Maharashtra();
Japan();
Russia obj1;
obj1.Moscow();
return 0;   
}
