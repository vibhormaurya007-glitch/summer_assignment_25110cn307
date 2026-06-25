// Write a program to Sort names alphabetically
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Input total number of names:";
    cin >> n;
    vector<string> names(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> names[i];
    }
    for (int i = 0; i < names.size(); i++)
    {
        for (int j = i + 1; j < names.size(); j++)
        {
            if (names[i] > names[j])
            {
                string temp = names[i];
                names[i] = names[j];
                names[j] = temp;
            }
        }
    }
    cout<<"Names according to alphabet"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << names[i]<<endl;
    }
    return 0;
}