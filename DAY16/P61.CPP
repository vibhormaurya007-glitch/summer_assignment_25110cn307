// Write a program to Find missing number in array.
#include <iostream>
using namespace std;
int main()
{
    int n;
    printf("enter size of array:");
    cin >> n;
    int arr[n];
    printf("enter elements of array:\n");
    // Assumption:
    // 1. Array is sorted
    // 2. Exactly one element is missing
    // 3. Array follows a series
    for (int k = 0; k < n; k++)
    {
        cin >> arr[k];
    }
    int i = 0;
    int j = 1;
    int d = (arr[n - 1] - arr[0]) / n;

    while (j < n)
    {
        if ((arr[j] - arr[i]) == d)
        {
            i++;
            j++;
        }
        else
        {
            break;
        }
    }
    printf("missing element=%d", arr[i] + d);
    return 0;
}