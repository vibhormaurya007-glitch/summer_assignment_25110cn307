// Write a program to Find common elements.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, m;
    cout << "enter size of first array: ";
    cin >> n;
    vector<int> arr1(n);
    cout << "enter size of second array: ";
    cin >> m;
    vector<int> arr2(m);
    cout << "enter element of first array:" << endl;
    for (int i = 0; i < arr1.size(); i++)
    {
        cin >> arr1[i];
    }
    cout << "enter element of second array:" << endl;
    for (int i = 0; i < arr2.size(); i++)
    {
        cin >> arr2[i];
    }
    vector<int> result;
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<m;j++)
        {

            if(arr1[i]==arr2[j])
            {

                result.push_back(arr1[i]);
                break;
            }
        }

    }
    cout<<"Common element in Arrays:";
    
       for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
   

    return 0;
}