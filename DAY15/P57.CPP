// Write a program to Reverse array.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "enter size of array:";
    cin >> n;
    vector<int> arr(n);
    cout << "enter elements of array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int left=0;
    int right=n-1;
    while(right>left)
    {
        int temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left++;
        right--;
    }
    for(int i=0;i<n;i++)
    {

        cout<<arr[i]<<" ";
    }

    return 0;
}