// Write a program to Create bank account system.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter total number of customer:";
    cin >> n;
    cin.ignore();
    vector<string> acc_number(n);
    vector<string> name(n);
    vector<string> acc_type(n);
    vector<double> balance(n);
    cout << "Enter Account Number:" << endl;
    for (int i = 0; i < n; i++)
    {
        getline(cin, acc_number[i]);
    }
    cout << "Enter customer Name:" << endl;
    for (int i = 0; i < n; i++)
    {
        getline(cin, name[i]);
    }
    cout << "Enter Account Type:" << endl;
    for (int i = 0; i < n; i++)
    {
        getline(cin, acc_type[i]);
    }

    cout << "Enter Balance:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> balance[i];
        cin.ignore();
    }
    cout << "================ Welcome To Epstein Bank=============" << endl
         << endl;

    while (true)
    {
        cout << "1.Display All Account" << endl
             << "2.Deposit Money" << endl
             << "3.Withdraw Money" << endl
             << "4.Search Account" << endl
             << "5.Exit" << endl;

        int menu;
        cin >> menu;
        cout << endl;
        switch (menu)
        {
        case 1:
        {
            cout << left
                 << setw(20) << "S.no"
                 << setw(20) << "Account Number"
                 << setw(20) << "Name"
                 << setw(20) << "Account type"
                 << setw(20) << "Balance"
                 << endl;
            for (int i = 0; i < n; i++)
            {
                cout << left
                     << setw(20) << i + 1
                     << setw(20) << acc_number[i]
                     << setw(20) << name[i]
                     << setw(20) << acc_type[i]
                     << setw(20) << balance[i]
                     << endl;
            }
            cout << endl;
            break;
        }
        case 2:
        {
            string a;
            double b;
            int found = 0;
            cout << "Enter Account Number:";
            cin >> a;
            cout << "Enter Amount to be deposit:";
            cin >> b;
            for (int i = 0; i < n; i++)
            {

                if (a == acc_number[i])
                {
                    balance[i] = balance[i] + b;
                    cout << left
                         << setw(20) << "Account Number:"
                         << setw(20) << a
                         << endl
                         << setw(20) << "Name:"
                         << setw(20) << name[i]
                         << endl
                         << setw(20) << "Account type:"
                         << setw(20) << acc_type[i]
                         << endl
                         << setw(20) << "Balance:"
                         << setw(20) << balance[i]
                         << endl;
                    found = 1;
                    break;
                }
            }
            if (found == 0)
            {
                cout << "Wrong account number";
            }
            a.clear();
            b = 0;
            cout << endl;
            break;
        }
        case 3:
        {
            string a;
            double b;
            int found = 0;

            cout << "Enter Account Number:";
            cin >> a;
            cout << "Enter Amount to be withdraw:";
            cin >> b;
            for (int i = 0; i < n; i++)
            {

                if (a == acc_number[i])
                {
                    found = 1;
                    if (balance[i] >= b)
                    {

                        balance[i] = balance[i] - b;
                        cout << left
                             << setw(20) << "Account Number:"
                             << setw(20) << a
                             << endl
                             << setw(20) << "Name:"
                             << setw(20) << name[i]
                             << endl
                             << setw(20) << "Account type:"
                             << setw(20) << acc_type[i]
                             << endl
                             << setw(20) << "Balance:"
                             << setw(20) << balance[i]
                             << endl;
                        break;
                    }
                    else
                    {
                        cout << "insufficient balance" << endl;
                    }
                }
            }
            if (found == 0)
            {
                cout << "Wrong account number" << endl;
            }
            a.clear();
            b = 0;
            cout << endl;
            break;
        }
        case 4:
        {
            string a;
            int found = 0;

            cout << "Enter Account Number:";
            cin >> a;
            for (int i = 0; i < n; i++)
            {

                if (a == acc_number[i])
                {
                    cout << left
                         << setw(20) << "Account Number:"
                         << setw(20) << a
                         << endl
                         << setw(20) << "Name:"
                         << setw(20) << name[i]
                         << endl
                         << setw(20) << "Account type:"
                         << setw(20) << acc_type[i]
                         << setw(20) << "Balance:"
                         << setw(20) << balance[i]
                         << endl;
                    found = 1;
                    break;
                }
            }
            if (found == 0)
            {
                cout << "Wrong account number" << endl;
            }
            a.clear();
            cout << endl;
            break;
        }
        case 5:
        {
            cout << "GOOD BYE" << endl
                 << "Go Sleep peacefully" << endl
                 << "Your money is safe";
            return 0;
        }
        }
    }

    return 0;
}