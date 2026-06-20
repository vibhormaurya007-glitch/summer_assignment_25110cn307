//Write a program to Find column-wise sum.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cout << "enter order of matrix:" << endl;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));

    cout << "enter elements of matrix:";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    for (int j = 0; j < m; j++)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + mat[i][j];
        }
        cout<<"sum of column "<<j+1<<" is:"<<sum<<endl;
    }

    return 0;
}
