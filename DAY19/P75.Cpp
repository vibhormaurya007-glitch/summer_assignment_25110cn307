// Write a program to Transpose matrix.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cout << "enter no. of rows & columns of matrix:";
    cin >> n >> m;
    vector<vector<int>> mat1(n, vector<int>(m));
    vector<vector<int>> mat2(m, vector<int>(n));

    cout << "enter elements of matrix:";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat1[i][j];
        }
    }
    cout << "before transpose:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat1[i][j]<<" ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            mat2[j][i]=mat1[i][j];
        }
    }
    cout<<"transpose matrix:"<<endl;
      for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat2[i][j]<<" ";
        }
        cout << endl;
    }
    

    return 0;
}