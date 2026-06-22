// Write a program to Count words in a sentence.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout << "enter string:";
    getline(cin, str);
    cout << "Total number of words:";
    int count=0;
    for (int i = 0; i < str.length(); i++)
    {
        if ((i == 0 && str[i] != ' ') || (str[i] == ' ' && str[i - 1] != ' '))
        {
            count++;
        }
    }
    cout<<count;

    return 0;
}