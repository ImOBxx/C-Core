#include <iostream>
using namespace std;

class Batsman
{
    float bcode;
    string bname;
    int innings;
    int runs;
    int notout;
    float batavg;
public:
    float calcavg()
    {
        return (runs / (innings - notout));
    }
    
    void readdata()
    {
        cout << "\n";
        cout << "Enter Batsman Bar Code NO. [4 Digit Code]: ";
        cin >> bcode;
        cout << "Enter Batsman Name: ";
        cin >> bname;
        cout << "\n";
        cout << "Enter Number Of Innings Played: ";
        cin >> innings;
        cout << "Enter Number Of Runs Scored: ";
        cin >> runs;
        cout << "Enter Number OF Not Out Innings Played: ";
        cin >> notout;
        cout << "\n";
        batavg = calcavg();

    }

    void displaydata()
    {
        cout << "\n";
        cout << "The Batsman's Bar Code Number: " << bcode << endl;
        cout << "The Batsman's Name:  " << bname << endl;
        cout << "\n";
        cout << "The Batsman's Number Of Innings Played: " << innings << endl;
        cout << "The Batsman's Number Of Runs Scored: " << runs << endl;
        cout << "The Batsman's Number Of Not Out Innings Played: " << notout << endl;
        cout << "\n";
        cout << "The Batsman's Batting Average: " << batavg << endl;
        cout << "\n";
        
    }
};

int main()
{
    Batsman Obj;
    Obj.readdata();
    Obj.displaydata();
    return 0;
}