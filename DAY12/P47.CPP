// Write a program to Write function for Fibonacci.
#include <iostream>
using namespace std;
void fibonacci(int x)
{
    int a = 0;
    int b = 1;
    for (int i = 1; i <= x; i++)
    {
        cout << a<<" ";
        int c = a + b;
        a = b;
        b = c;
    }
}
int main()
{
    int n;
    cout << "enter number of terms:";
    cin >> n;
    fibonacci(n);
}