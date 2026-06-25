// Write a program to Find common characters in strings.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1, str2;
    cout << "enter first string:";
    getline(cin, str1);
    cout << "enter second string:";
    getline(cin, str2);
    for (int i = 0; i < str1.size(); i++)
    {
        bool alreadyprinted = false;
        for(int k=0;k<i;k++)
        {
            if(str1[i]==str1[k]){
                alreadyprinted=true;
                break;
            }
        }
        if (alreadyprinted)
        {
            continue;
        }
        for (int j = 0; j < str2.size(); j++)
        {
            if (str1[i] == str2[j])
            {
                cout << str1[i];
                break;
            }
        }
    }
    return 0;
}