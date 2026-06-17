// Write a program to Union of arrays
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

        result.push_back(arr1[i]);
    }
    for (int i = 0; i < m; i++)
    {

        result.push_back(arr2[i]);
    }
    cout << "union array:";
    for(int i=0;i<result.size();i++)
    {
        for(int j=i+1;j<result.size();j++)
        {
            if(result[i]==result[j])
            {
                result.erase(result.begin()+j);
                j--;
            }
        }
    }
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
   

    return 0;
}