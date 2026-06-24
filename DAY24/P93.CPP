// Write a program to Check string rotation.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1;
    string str2;
    cout << "enter first string:";
    getline(cin, str1);
    cout << "enter second string:";
    getline(cin, str2);
    if (str1.length() != str2.length())
    {
        cout << "Not a rotated string";
        return 0;
    }
    string check = str1 + str2;
    if (check.find(str2) != string ::npos)
    {
        cout << "it is a rotated string";
    }
    else
    {
        cout << "not a rotated string";
    }

    return 0;
}