// Write a program to Write function to find sum of two numbers.
#include <iostream>
using namespace std;
int sum(int x, int y)
{
    int sum = x + y;
    return sum;
}
int main()
{
    int a, b;
    cout << "enter first number:";
    cin >> a;
    cout << "enter second number:";
    cin >> b;
    int result = sum(a, b);
    cout << "sum = " << result;
    return 0;
}