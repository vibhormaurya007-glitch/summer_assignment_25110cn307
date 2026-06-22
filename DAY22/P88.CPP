//  Write a program to Remove spaces from string.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    cout << "Enter string: ";
    getline(cin, str);

    string result = "";

    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] != ' ')
        {
            result += str[i];
        }
    }

    cout << "String without spaces: " << result;

    return 0;
}