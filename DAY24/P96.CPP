#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout << "enter string:";
    getline(cin, str);
    cout << "string after removing duplicates:";
    for (int i = 0; i < str.size(); i++)
    {
        bool duplicate = false;
        for (int j = 0; j < i; j++)
        {

            if (str[i] == str[j])
            {
                duplicate = true;
                break;
            }
        }
        if (!duplicate)
        {
            cout<<str[i];
        }
    }
    return 0;
}