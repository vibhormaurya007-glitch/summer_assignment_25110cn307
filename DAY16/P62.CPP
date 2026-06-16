// Write a program to Find maximum frequency element.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "enter size of array:";
    cin >> n;
    vector<int> arr(n);
    cout << "enter elements of array:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxfrequency=0;
    int maxelement=arr[0];
    for(int i=0;i<n;i++)
    {
        int count = 0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }

        }
        if(count>maxfrequency)
        {
            maxfrequency=count;
            maxelement=arr[i];
        }
    }
    cout<<"maximum frequency element:"<<maxelement<<endl;
    cout<<"frequency:"<<maxfrequency;
    return 0;
}