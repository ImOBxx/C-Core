#include <iostream>
using namespace std;

class Seminar
{
    int time;
public:
    Seminar()        //Function 1
    {
        time = 30;
        cout << "Seminar starts now" << endl;
    }
    void lecture()        //Function 2
    {
        cout << "Lectures in the seminar on" << endl;
    }
    Seminar(int duration)        //Function 3
    {
        time = duration;
        cout << "Seminar starts now duration"  << endl;
    }

    Seminar(int duration,int d)        //Function 3
    {
        time = duration;
        cout << "Seminar starts now duration"  << endl;
    }
    ~Seminar()        //Function 4
    {
        cout << "Thanks" << endl;
    }
};

int main()
{
    Seminar seminar1;
    Seminar semiar(20);
    Seminar semiar1(20,20);
    
    semiar.lecture();
    return 0;
}
