// Write a program to Merge arrays.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, m;
    cout << "enter size of first array: ";
    cin >> n;
    vector<int> arr1(n);
    cout << "enter size of second array: ";
    cin >> m;
    vector<int> arr2(m);
    cout << "enter element of first array:" << endl;
    for (int i = 0; i < arr1.size(); i++)
    {
        cin >> arr1[i];
    }
    cout << "enter element of second array:" << endl;
    for (int i = 0; i < arr2.size(); i++)
    {
        cin >> arr2[i];
    }
    vector<int> result;
    for (int i = 0; i < n; i++)
    {

        result.push_back(arr1[i]);
    }
    for (int i = 0; i < m; i++)
    {

        result.push_back(arr2[i]);
    }

    // int k = 0;
    // for (int i = 0; i < result.size(); i++)
    // {
    //     if (i < n)
    //     {

    //         result[i] = arr1[i];
    //     }
    //     else
    //     {
    //         result[i] = arr2[k];
    //         k++;
    //     }
    // }
    cout << "merge array:";
    for (int i = 0; i < result.size(); i++)
    {

        cout << result[i] << " ";
    }

    return 0;
}