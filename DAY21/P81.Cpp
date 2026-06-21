//Write a program to Find string length without strlen().
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    cout<<"enter string:";
    getline(cin,name);
    int count=0;
    for(char ch:name)
    {
        count++;
    }
    cout<<"length of string is:"<<count;
    return 0;
}
