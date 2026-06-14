// Write a program to Frequency of an element.

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
    int count = 0, search, found = 0;
    cout << "enter element want to find";
    cin >> search;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            count++;
        }
    }
    cout << "frequency of entred element is:" << count;
    return 0;
}