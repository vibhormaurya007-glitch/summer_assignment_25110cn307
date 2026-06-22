// Write a program to Character frequency. 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    cout << "Enter string: ";
    getline(cin, str);

    for(int i = 0; i < str.size(); i++)
    {
        bool visited = false;

        // Check if character already appeared before
        for(int k = 0; k < i; k++)
        {
            if(str[i] == str[k])
            {
                visited = true;
                break;
            }
        }

        if(visited)
        {
            continue;
        }
        if(str[i]==' '){
            continue;
        }

        int count = 0;

        for(int j = 0; j < str.size(); j++)
        {
            if(str[i] == str[j])
            {
                count++;
            }
        }

        cout << str[i] << " = " << count << endl;
    }

    return 0;
}
