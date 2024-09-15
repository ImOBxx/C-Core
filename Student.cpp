#include <iostream>
using namespace std;

class Student
{
    public:
    int roll_number;
    string s_name;
    string c_name;
    int H;
    int E;
    int M;
    int T;

    void input()
    {
        cout << "Enter Roll Number: ";
        cin >> roll_number;
        cout << "Enter Student Name: ";
        cin >> s_name;
        cout << "Enter Class Name: ";
        cin >> c_name;
        cout << "Enter Hindi Marks: ";
        cin >> H;
        cout << "Enter English Marks: ";
        cin >> E;
        cout << "Enter Maths Marks: ";
        cin >> M;
    }
    
    void calc()
    {
        T = H + M + E;
    }
    void display()
    {
        cout << T << endl;
    }
};

int main()
{
    Student O1;
    Student O2;
    cout << "Calling By O1 Object 1: input." ;
    O1.input();
    cout << "Calling By O1 Object 2: calc" ;
    O1.calc();
    cout << "Calling By O1 Object 3: display" ;
    O1.display();
    cout << "Calling By O2 Object 1: input" ;
    O2.input();
    cout << "Calling By O2 Object 2: calc" ;
    O2.calc();
    cout << "Calling By O2 Object 3: display" ;
    O2.display();
    return 0;
}

