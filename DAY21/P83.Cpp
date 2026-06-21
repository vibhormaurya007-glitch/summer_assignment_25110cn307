// Write a program to Count vowels and consonants.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    cout << "enter string:";
    getline(cin, name);
    int vowel = 0, consonant = 0;
    for (int i = 0; i < name.length(); i++)
    {
        if (name[i] == 'a' || name[i] == 'e' ||
            name[i] == 'i' || name[i] == 'o' ||
            name[i] == 'u' || name[i] == 'A' ||
            name[i] == 'E' || name[i] == 'I' ||
            name[i] == 'O' || name[i] == 'U')
        {
            vowel++;
        }
        else if (name[i] == ' ')
        {
            continue;
        }
        else
        {
            consonant++;
        }
    }
    cout << "Vowels = " << vowel << endl
         << "Consonants = " << consonant;
    return 0;
}