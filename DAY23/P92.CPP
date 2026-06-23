// Write a program to Find maximum occurring character.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "enter string:";
    string str;
    getline(cin, str);
    int max = 0;
    char ch;
    for (int i = 0; i < str.size(); i++)
    {
        int count = 0;
        for (int j = i; j < str.size(); j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        if (count > max)
        {
            max = count;
            ch = str[i];
        }
    }
    cout << "maximum occurence character:" << ch;
    return 0;
}