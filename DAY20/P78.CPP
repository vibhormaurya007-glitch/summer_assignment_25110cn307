// Write a program to Check symmetric matrix.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter order of matrix:" << endl;
    cin >> n;
    vector<vector<int>> mat1(n, vector<int>(n));
    vector<vector<int>> mat2(n, vector<int>(n));
    cout << "enter elements of matrix:";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat1[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat2[i][j] = mat1[j][i];
        }
    }
    int found = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat1[i][j] != mat2[i][j])
            {
                found=0;
                break;
            }
        }
        if(found==0){
            break;
        }
    }
   if(found==1){
    cout<<"symmetric matrix";
   }
   else{
    cout<<"not symmetric";
   }

    return 0;
}