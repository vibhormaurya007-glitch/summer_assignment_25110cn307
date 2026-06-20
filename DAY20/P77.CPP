// Write a program to Multiply matrices.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r1, c1, c2;
    cout << "enter no. rows & column of first matrix:";
    cin >> r1>>c1;
    cout << "enter no of columns of second amatrix:";
    cin >>c2;
    vector<vector<int>> mat1(r1, vector<int>(c1));
    vector<vector<int>> mat2(c1, vector<int>(c2));
    vector<vector<int>> mat3(r1, vector<int>(c2));
    cout << "enter elements of first matrix:" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {

            cin >> mat1[i][j];
        }
    }
    cout << "enter elements of second matrix:" << endl;

    for (int i = 0; i < c1; i++)
    {
        for (int j = 0; j < c2; j++)
        {

            cin >> mat2[i][j];
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            mat3[i][j]=0;
            for (int k = 0; k < c1; k++)
            {

                mat3[i][j] = mat3[i][j]+mat1[i][k] * mat2[k][j];
            }
        }
    }
    cout << "resultant matrix:"<<endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << mat3[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}