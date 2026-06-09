// Write a program to Print hollow square pattern.
// *****
// *   *
// *   *
// *   *
// *****

#include <iostream>
using namespace std;
int main()
{
    int row, coloumn;
    cout << "enter no.of rows:";
    cin >> row;
    cout << "enter no.of coloumn:";
    cin >> coloumn;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= coloumn; j++)
        {
            if (i == 1 || i == row || j == 1 || j == coloumn)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout<<endl;
    }
    return 0;
}