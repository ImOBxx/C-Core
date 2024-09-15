#include <iostream>
using namespace std;

class Employee
{
   public:
   int employee_ID;
   string name;
   string depart;
   string designation;
   int bp;
   int hra;
   int ta;
   int da;
   int ts;

   void input()
   {
    
    cout << "Enter Employee ID: ";
    cin >> employee_ID;
    cout << "Enter Name Of The Employee: ";
    cin >> name;
    cout << "Enter Department: ";
    cin >> depart;
    cout << "Enter Designation: ";
    cin >> designation;
    cout << "Enter Basic Salary: ";
    cin >> bp;
   }
   
   void compute()
   {

    if (bp > 15000)
    {
        hra = (15 / 100.0) * bp;
        da = (20 / 100.0) * bp;
        ta = (25 / 100.0) * bp;
        ts = hra + da + ta + bp;
    }
    else if (bp <= 15000 && bp > 10000)
    {
        hra = (18 / 100.0) * bp;
        da = (16 / 100.0) * bp;
        ta = (12 / 100.0) * bp;
        ts = hra + da + ta + bp;
    }
   }

   void show()
   {
        cout << "The Total Salary After Allowances: " << ts << endl;
        cout << "\n";
   } 

};

int main()
{
    cout << "\n";
    Employee A;
    Employee B;
    cout << "Input Fields: " << endl;
    cout << "\n";
    A.input();
    cout << "\n";
    A.compute();
    cout << "\n";
    A.show();
    cout << "Input Fields: " << endl;
    cout << "\n";
    B.input();
    cout << "\n";
    B.compute();
    cout << "\n";
    B.show();
    cout << "\n";
}
