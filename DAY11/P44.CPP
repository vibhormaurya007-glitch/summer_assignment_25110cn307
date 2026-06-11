// Write a program to Write function to find factorial.
#include <iostream>
using namespace std;
int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n;
    cout<<"enter number:";
    cin>>n;
    cout<<"factorial= "<<factorial(n);
    return 0; 
}