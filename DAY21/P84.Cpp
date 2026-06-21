// Write a program to Convert lowercase to uppercase.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "enter string in lowercase:";
    string str;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {

            str[i] = str[i] - 32;
        }
        cout << str[i];
    }
}