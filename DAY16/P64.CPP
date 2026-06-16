// Write a program to Remove duplicates from array.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, x;
    cout << "enter size of array:";
    cin >> n;
    vector<int> arr(n);
    cout << "enter elements of array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size();j++)
        {
            if(arr[i]==arr[j])
            {
                arr.erase(arr.begin()+j);
                j--;
            }
        }
    }
    cout<<"new array after removing duplicate:";
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i];
    }
    return 0;
}