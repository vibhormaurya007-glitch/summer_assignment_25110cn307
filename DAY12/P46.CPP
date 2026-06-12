// Write a program to Write function for Armstrong

#include <iostream>
#include <math.h>
using namespace std;
int armstrong(int x)
{
    int sum = 0, count = 0;
    int original = x;
    while (original > 0)
    {
        count++;
        original = original / 10;
    }
    original = x;
    while (original > 0)
    {
        int remainder = original % 10;
        sum = sum + pow(remainder, count);
        original = original / 10;
    }
    return sum;
}
int main()
{
    int n;
    cout << "enter number:";
    cin >> n;
    if (armstrong(n) == n)
    {
        cout << "armstrong number";
    }
    else
    {
        cout << "not armstrong";
    }
    return 0;
}