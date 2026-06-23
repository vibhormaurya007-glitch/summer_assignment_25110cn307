// Write a program to Check anagram strings.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1, str2;
    cout << "enter first string:";
    getline(cin, str1);
    cout << "enter second string:";
    getline(cin, str2);
    if (str1.length() != str2.length())
    {
        cout << "not anagram";
        return 0;
    }
    for (int i = 0; i < str1.size() - 1; i++)
    {
        for (int j=i;j<str1.size();j++){

            if (str1[j] < str1[i ])
            {
                int temp = str1[j];
                str1[j] = str1[i ];
                str1[i ] = temp;
            }
        }
    }
    
    for (int i = 0; i < str1.size() - 1; i++)
    {
        for (int j=i;j<str1.size();j++){

            if (str2[j] < str2[i ])
            {
                int temp = str2[j];
                str2[j] = str2[i ];
                str2[i ] = temp;
            }
        }
    }
    
    int found = 1;
    for (int i = 0; i < str2.size(); i++)
    {
        if (str2[i] != str1[i])
        {
            found = 0;
            break;
        }
    }
    if (found == 1)
    {
        cout << "string is anagram";
    }else {
        cout<<"not anagram";
    }

    return 0;
}
