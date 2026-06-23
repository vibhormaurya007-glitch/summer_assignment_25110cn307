// Write a program to Find first repeating character
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout << "enter string:";
    getline(cin, str);
    for (int i = 0; i < str.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < str.size(); j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        if (count == 2)
        {
            cout << "first repeating character:" << str[i];
            return 0;
        }
    }
    cout << "No repeating character exist in string:";
    return 0;
}