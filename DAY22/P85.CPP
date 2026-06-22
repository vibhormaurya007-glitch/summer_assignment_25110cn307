// Write a program to Check palindrome string.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter string:";
    string str;
    getline(cin, str);
    int i = 0;
    int j = str.size()-1;
    bool palindrome=true;
    while (i<j)
    {
         
        if (str[i] != str[j])
        {
            palindrome=false;
            break;
        }
        i++;
        j--;
    }
    if(palindrome)
    {
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
    return 0;
}