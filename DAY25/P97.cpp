// Write a program to Merge two sorted arrays.

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, m;
//     cout << "enter size of first array:";
//     cin >> n;
//     cout << "enter size of second array:";
//     cin >> m;
//     vector<int> arr1(n);
//     vector<int> arr2(m);
//     vector<int> arr3(m + n);
//     cout << "enter elements of first array:" << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr1[i];
//     }
//     cout << "enter elements of second array:" << endl;
//     for (int i = 0; i < m; i++)
//     {
//         cin >> arr2[i];
//     }
//     for (int i = 0; i < m + n; i++)
//     {
//         if (i < n)
//         {
//             arr3[i] = arr1[i];
//         }
//         else
//         {
//             arr3[i] = arr2[i - n];
//         }
//     }
//     for (int i = 0; i < m + n; i++)
//     {
//         for (int j = 0; j < m + n; j++)
//         {
//             if (arr3[i] < arr3[j])
//             {
//                 int temp = arr3[i];
//                 arr3[i] = arr3[j];
//                 arr3[j] = temp;
//             }
//         }
//     }
//     cout << "merge sorted array:";
//     for (int i = 0; i < m + n; i++)
//     {
//         cout << arr3[i] << " ";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cout << "enter size of first array:";
    cin >> n;
    cout << "enter size of second array:";
    cin >> m;
    vector<int> arr1(n), arr2(m), arr3;
    cout << "enter elements of first array(sorted) " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "enter elements of second array(sorted) " << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3.push_back(arr1[i]);
            i++;
        }
        else
        {
            arr3.push_back(arr2[j]);
            j++;
        }
    }
    while (i < n)
    {
        arr3.push_back(arr1[i]);
        i++;
    }
    while (j < m)
    {
        arr3.push_back(arr2[j]);
        j++;
    }
    cout<<"merge sorted array:";
    for (int i = 0; i < m + n; i++)
    {
        cout << arr3[i]<<" ";
    }

    return 0;
}