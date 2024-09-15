#include <iostream>
using namespace std;

class Student
{
    int admo;
    string sname;
    float eng, math, science;
    float total;
    float per;
    public:
    float percentage()
    {
        return ((total / 300) * 100.0);
    }

    float ctotal()
    {
        return (eng + math + science);
    }

    void TakeData()
    {
        cout << "\n";
        cout << "Enter Admission Number: ";
        cin >> admo;
        cout << "Enter Student Name: ";
        cin >> sname;
        cout << "\n";
        cout << "Mathematics Marks: ";
        cin >> math;
        cout << "English Marks: ";
        cin >> eng;
        cout << "Science Marks: ";
        cin >> science;
        cout << "\n";
        total = ctotal();
        cout << "\n";
        per = percentage();
        cout << "\n";


    }

    void ShowData()
    {
        cout << "\n";
        cout << "Students Admission Number: " << admo << endl;
        cout << "\n";
        cout << "Students Name: " << sname << endl;
        cout << "\n";
        cout << "Students Marks In Mathematics: " << math << endl;
        cout << "Students Marks In English: " << eng << endl;
        cout << "Students Marks In Science: " << science << endl;
        cout << "\n";
        cout << "Students Total Marks: " << total << endl;
        cout << "\n";
        cout << "Students Aggregate Percentage: " << per << "%" << endl;
        cout << "\n";
    }
};
int main()
{
    Student Obj;
    Obj.TakeData();
    Obj.ShowData();
    return 0;
}