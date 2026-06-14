// Write a program to Find duplicates in array.

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "enter size of array:";
    cin >> n;
    vector<int> arr(n);
    bool found = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "duplicate elements are:" << endl;
    for (int i = 0; i < n; i++)
    {
        bool alreadycheck = false;
        for (int k = 0; k < i; k++)
        {
            if (arr[k] == arr[i])
            {
                alreadycheck = true;
                break;
            }
        }
        if (alreadycheck)
            continue;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {

                cout << arr[i] << " ";
                break;
            }
        }
    }
    return 0;
}