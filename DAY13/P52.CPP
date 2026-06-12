//  Write a program to Count even and odd elements.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter size of array:";
    cin >> n;
    int arr[n];
    int even = 0, odd = 0;
    cout << "enter elements of array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "total number of even element:" << even << endl;
    cout << "total number of odd element:" << odd;

    return 0;
}