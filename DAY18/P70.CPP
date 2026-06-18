// Write a program to Selection sort.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter size of array:";
    cin >> n;
    vector<int> arr(n);
    cout << "enter elements of array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i+1; j < n ; j++)
        {
            if (arr[min_index] > arr[j ])
            {
                min_index = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
    cout << "sorted array";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
