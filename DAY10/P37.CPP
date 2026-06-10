// Write a program to Print star pyramid.
//     *
//    ***
//   ***** 
//  *******
// *********

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no.of rows:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n-i;j>0;j--)
        {
            printf(" ");

        }
        for(int j=1;j<=i*2-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}