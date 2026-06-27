// Write a program to Create salary management system
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter total number of employee: ";
    cin >> n;
    cin.ignore();
    vector<string> employee_id(n);
    vector<string> name(n);
    vector<double> basic_salary(n);
    cout << "enter employee id"<<endl;
    for (int i = 0; i < n; i++)
    {
        getline(cin, employee_id[i]);
    }
    cout << "enter employee name"<<endl;
    for (int i = 0; i < n; i++)
    {
        getline(cin, name[i]);
    }
    cout << "enter employee salary"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>basic_salary[i];
    }

    cout << "===============salary managemnet system=================" << endl
         << endl;
    cout << left
         << setw(10) << "S.No"
         << setw(20) << "Employee ID"
         << setw(20) << "Name"
         << setw(20) << "Basic Salary"
         << setw(20) << "HRA"
         << setw(20) << "DA"
         << setw(20) << "TAX"
         << setw(20) << "Net Salary"
         << endl;
         for(int i=0;i<n;i++)
         {
             cout << left
         << setw(10) << i+1
         << setw(20) << employee_id[i]
         << setw(20) << name[i]
         << setw(20) << basic_salary[i]
         << setw(20) << (basic_salary[i]*20)/100
         << setw(20) << (basic_salary[i]*10)/100
         << setw(20) << ((basic_salary[i]*10)/100 +(basic_salary[i]*20)/100+basic_salary[i])/100
         << setw(20) << (basic_salary[i]*10)/100 +(basic_salary[i]*20)/100+basic_salary[i]-((basic_salary[i]*10)/100 +(basic_salary[i]*20)/100+basic_salary[i])/100
         << endl;
         }

    return 0;
}