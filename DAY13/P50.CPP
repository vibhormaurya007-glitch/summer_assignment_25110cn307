// Write a program to Find sum and average of array.
#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout << "enter size of array:";
    cin >> n;
    int arr[n];
    cout << "enter elements of array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum=sum+arr[i];
    }
    cout<<"sum="<<sum;
    return 0;
}