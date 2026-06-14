// Write a program to Linear search.
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
    int search;
    cout << "enter number you want to search:";
    cin >> search;
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (search == arr[i])
        {
            cout << "enter element found at index " << i << endl;
            found = 1;
        }
    }
    if (found == 0)
    {
        cout << "enter element not found";
    }

    return 0;
}