// Write a program to Write function for perfect number.
#include <iostream>
using namespace std;
void perfect(int x)
{
    int sum = 0;
    for (int i = 1; i < x; i++)
    {
        if (x % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == x)
    {
        cout << "perfect number";
    }
    else
    {
        cout << "not perfect number";
    }
}
int main()
{
    int n;
    cout << "enter number:";
    cin >> n;
    perfect(n);
}