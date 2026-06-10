// Write a program to Print character pyramid
//      A
//     ABA
//    ABCBA
//   ABCDCBA
//  ABCDEDCBA

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter no. of rows: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << char('A' + j);
        }
        for (int j = i - 1; j >= 0; j--)
        {
            cout << char('A' + j);
        }
        cout << endl;
    }
}