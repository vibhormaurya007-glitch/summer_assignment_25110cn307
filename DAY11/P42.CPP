// Write a program to Write function to find maximum.
#include <iostream>
using namespace std;
int maximum(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{

    int n, max, num;
    printf("enter number:");
    cin >> n;
    cout << "enter first number:";
    cin >> max;
    for (int i = 1; i < n; i++)
    {
        cin >> num;
        max=maximum(max,num);
    }
    cout<<"maximum="<<max;
    return 0;
}
