// Write a program to Create student record management system
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int total_students;
    cout << "enter number of student:";
    cin >> total_students;
    cin.ignore();
    vector<string> name(total_students);
    vector<string> contact_number(total_students);
    vector<string> grade(total_students);
    vector<string> character(total_students);
    cout << "enter name of students" << endl;
    for (int i = 0; i < total_students; i++)
    {
        getline(cin, name[i]);
    }
    cout << "enter contact number" << endl;
    for (int i = 0; i < total_students; i++)
    {
        getline(cin, contact_number[i]);
    }
    cout << "enter grade" << endl;
    for (int i = 0; i < total_students; i++)
    {
        getline(cin, grade[i]);
    }
    cout << "enter character" << endl;
    for (int i = 0; i < total_students; i++)
    {
        getline(cin, character[i]);
    }

    cout << "\n================ STUDENT RECORD ================\n\n";
    cout << left
         << setw(10)<<"Roll no."
         << setw(20)<<"Name"
         << setw(18)<<"Contact Number"
         << setw(10)<<"Grade"
         << setw(10)<<"Character"
         <<endl;
    for (int i = 0; i < total_students; i++)
    {cout << left
         << setw(10)<<i+1
         << setw(20)<<name[i]
         << setw(18)<<contact_number[i]
         << setw(10)<<grade[i]
         << setw(10)<<character[i]
         <<endl;
    }
    return 0;
}