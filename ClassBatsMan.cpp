#include <iostream>
#include <string>  
using namespace std;

class Batsman
{
    int bcode;
    string bname;
    float innings;
    float notout;
    float runs;
    float batavg;

    public:
    float calcavg()
    {
        
        if (innings == notout) {
            return 0.0;
        }
        return (runs / (innings - notout));
    }

    void readdata()
    {
        cout <<"\n";
        cout << "Enter Batting Data: " << endl;
        cout << "\n";
        cout << "Enter Bar Code No.: ";
        cin >> bcode;
        cout << "Enter Name Of The Batsman: ";
        cin >> bname;  
        cout << "Enter Number Of Innings: ";
        cin >> innings;
        cout << "Enter Number Of Not Out Innings: ";
        cin >> notout;
        cout << "Enter Runs: ";
        cin >> runs;  
        cout << "\n";
        batavg = calcavg();
    }

    void DisplayData()
    {
        cout << "\n";
        cout << "Batting Data: " << endl;
        cout << "\n";
        cout << "The Bar Code No.: " << bcode << endl;
        cout << "The Name Of The Batsman: " << bname << endl;
        cout << "Number Of Innings: " << innings << endl;
        cout << "Number Of Not Out Innings: " << notout << endl;
        cout << "Runs: " << runs << endl;  
        cout << "Batting Average: " << batavg << endl;
        cout << "\n";
    }
};

int main()
{
    Batsman Obj;
    Obj.readdata();
    Obj.DisplayData();
    return 0;
}
