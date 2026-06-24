// Write a program to Find longest word.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout << "enter string:";
    getline(cin, str);
    cout << "longest word in the string is:";
    string longest;
    string word;
    for (int i = 0; i <= str.size(); i++)
    {
        if (i == str.size() || str[i] == ' ')
        {
            if (word.size() > longest.size())
            {
                longest = word;
            }
            word = "";
        }
        else
        {
            word += str[i];
        }
    }
    cout<<longest;
    return 0;
}