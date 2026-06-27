// Write a program to Create employee management system.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter total number of employee:";
    cin >> n;
    cin.ignore();
    vector<string> employee_id(n);
    vector<string> name(n);
    vector<string> role(n);
    vector<double> salary(n);
    vector<string> contact(n);
    cout << "Enter employee id" << endl;
    for (int i = 0; i < n; i++)
    {
        getline(cin, employee_id[i]);
    }
    cout << "Enter employee name" << endl;
    for (int i = 0; i < n; i++)
    {
        getline(cin, name[i]);
    }
    cout << "Enter employee role" << endl;
    for (int i = 0; i < n; i++)
    {
        getline(cin, role[i]);
    }
    cout << "Enter employee salary" << endl;
    for (int i = 0; i < n; i++)
    {
        cin>>salary[i];
    }
    cout << "Enter employee contact" << endl;
    for (int i = 0; i < n; i++)
    {
        getline(cin, contact[i]);
    }
    cout << "=============Employee Management System=================" << endl
         << endl;
    cout << left
         << setw(10) << "S.No"
         << setw(20) << "Employee Id"
         << setw(18) << "Name"
         << setw(25) << "Role"
         << setw(30) << "Salary"
         << setw(18) << "Contact No."
         << endl;
    for (int i = 0; i < n; i++)
    {
        cout << left
             << setw(10) << i + 1
             << setw(20) << employee_id[i]
             << setw(18) << name[i]
             << setw(25) << role[i]
             << setw(30) << salary[i]
             << setw(18) << contact[i]
             << endl;
    }
    return 0;
}