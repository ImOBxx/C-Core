#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "C++ is a general-purpose programming language";
    int start = 0;
    int word_length;
    int max_length = 0;
    string longest_word;
    int str_length = str.length();

    for (int i = 0; i <= str_length; i++)
    {
        char ch;
        if (i < str_length)
        {
            ch = str[i];
        }
        else
        {
            ch = ' ';  // Handle the end of the string
        }

        if (ch == ' ' || i == str_length)
        {
            int end;
            if (i == str_length)
            {
                end = i;
            }
            else
            {
                end = i - 1;
            }
            string word = str.substr(start, end - start + 1);
            cout << "Word: " << word << endl;
            start = i + 1;
            word_length = word.size();
            if (word_length > max_length)
            {
                max_length = word_length;
                longest_word = word;
            }
        }
    }
    
    cout << "Longest Word: " << longest_word << endl;

    return 0;
}
