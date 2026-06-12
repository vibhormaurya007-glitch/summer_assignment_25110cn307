// Write a program to Input and display array.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter size of array:";
    cin >> n;
    int arr[n];
    cout << "enter elements of array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}