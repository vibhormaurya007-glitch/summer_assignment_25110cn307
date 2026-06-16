// Write a program to Find pair with given sum.
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
    cout << "enter target sum:";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                cout << "pair of elements equal to target sum is:" << "(" << arr[i] << "," << arr[j] << ")" << endl;
            }
        }
    }
    return 0;
}
