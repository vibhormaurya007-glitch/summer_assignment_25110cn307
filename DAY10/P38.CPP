// Write a program to Print reverse pyramid.
// *********
//  *******
//   *****
//    ***
//     *

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no.of rows:";
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int j=0;j<=n-i;j++)
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