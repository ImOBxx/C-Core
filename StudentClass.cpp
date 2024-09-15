#include <iostream>
using namespace std;
 class student
{
int admno;
string sname;
float eng,math,science;
float total;
public:
 float ctotal()
{
    return(eng+math+science);
}
 void takedata()
{
    cout<<"Enter Admission No:";
    cin>>admno;
    cout<<"Enter  Student Name:";
    cin>>sname;
    cout<<"Enter English Marks";
    cin>>eng;
    cout<<"Enter Maths Marks";
    cin>>math;
    cout<<"Enter science Marks";
    cin>>science;
    total=ctotal();
}

 void Showdata()
{
    cout<<"Admission No"<<admno<<endl;
    cout<<"Student Name"<<sname<<endl;
    cout<<"Total"<<total << endl;
}

};
int main()
{
 student obj;
 obj.takedata();
 obj.Showdata();
 return 0;   
}