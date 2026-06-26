// Write a program to Create voting eligibility system.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string check;
    int n;
    cout << "==========voting eligibility system================"<<endl;
    cout << "Enter your age:";
    cin >> n;
    cout << "Are you a citizen of India(yes/no):";
    cin>>check;
    if (n >=18 && check == "yes")
    {
        cout << "eligible to vote";
    }
    else{
        cout<<"not eligible to vote";
    }
    return 0;
}