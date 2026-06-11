// Write a program to Write function to check prime
#include <iostream>
using namespace std;
bool isprime(int x)
{
    if (x <= 1)
    {

        return false;
    }
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout << "enter number:";
    cin >> n;
    if (isprime(n))
    {
        cout << "prime number";
    }
    else
    {
        cout << "not prime";
    }
}