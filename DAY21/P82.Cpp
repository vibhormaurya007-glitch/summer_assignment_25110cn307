// Write a program to Reverse a string.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    cout<<"enter string:";
    getline(cin,name);
    cout<<"Reversed string:";
    for(int i=name.length()-1;i>=0;i--)
    {
        cout<<name[i];
    }
    return 0;
}