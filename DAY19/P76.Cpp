// Write a program to Find diagonal sum.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, sum = 0;
    cout << "enter no. of rows & columns of matrix:";
    cin >> n >> m;
    vector<vector<int>> mat1(n, vector<int>(m));
    cout << "enter elements of matrix:";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat1[i][j];
        }
    }
    cout << "matrix:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat1[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {

        sum = sum + mat1[i][i];
    }
    cout << "sum of diagonal element = " << sum;

    return 0;
}