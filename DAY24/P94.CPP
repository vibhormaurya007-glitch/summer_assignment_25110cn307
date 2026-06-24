// Write a program to Compress a string
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout << "enter string:";
    getline(cin, str);
    cout << "compressed string:";
    int count = 1;
    for (int i = 0; i < str.size(); i++)
    {

        if (str[i] == str[i + 1])
        {
            count++;
        }
        else
        {

            cout << str[i] << count;
            count =1;
        }
    }
    return 0;
}