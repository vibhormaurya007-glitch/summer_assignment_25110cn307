// Write a program to Write function for palindrome.
#include <iostream>
using namespace std;
int palindrome(int x)
{
    int rev = 0;
    while (x > 0)
    {
        int temp = x % 10;
         rev = rev * 10 + temp;
        x = x / 10;
    }
    return rev;
}

int main()
{
    int n;
    cout << "enter number:";
    cin >> n;
    if (palindrome(n) == n)
    {
        cout << "palindrome number";
    }
    else
    {
        cout << "Not palimndrome number ";
    }

    return 0;
}