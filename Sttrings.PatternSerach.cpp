#include <iostream>
using namespace std;


     void printIndex(string text, string pat)
     {
          int found = text.find(pat);
          while (found != string::npos)
          {
               cout << "Pattern Found At " << found << endl;
               found = text.find(pat, found + 1);
          }
     }

     int main()
     {
          string text;
          string pat;
          cout << "Enter String: ";
          getline(cin, text);
          cout << "Enter Pattern: ";
          getline(cin, pat);
          printIndex(text, pat);
     }

