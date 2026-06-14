// Write a program to Second largest element.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter size of array:";
    cin >> n;
    int arr[n];
    cout << "enter elements of array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int largest;
    int sec_largest;
    if (arr[0] > arr[1])
    {
        largest = arr[0];
        sec_largest = arr[1];
    }
    else
    {
        largest = arr[1];
        sec_largest = arr[0];
    }

    for (int i = 2; i < n; i++)
    {
        if (arr[i] > largest)
        {
            sec_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > sec_largest && arr[i] < largest)
        {
            sec_largest = arr[i];
        }
    }
    cout << "largest=" << largest << endl;
    cout << "second largest=" << sec_largest;
    return 0;
}