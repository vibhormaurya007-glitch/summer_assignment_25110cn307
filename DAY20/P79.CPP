// Write a program to Find row-wise sum.
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
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum = sum + mat[i][j];
        }
        cout<<"sum of row "<<i+1<<" is:"<<sum<<endl;
    }

    return 0;
}
