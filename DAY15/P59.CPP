// Write a program to Rotate array right.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, k;
    cout << "enter size of array:";
    cin >> n;
    vector<int> arr(n);
    cout << "enter elements of array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Your Array:";
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "enter number of right rotation takes place:";
    cin >> k;
    k = k % n;
    for (int i = 1; i <= k; i++)
    {
        int temp = arr[n - 1];
        for (int j = n-1; j >0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }
    cout << "right rotated array by " << k << " position:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}