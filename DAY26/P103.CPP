// Write a program to Create ATM simulation.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int balance = 10000000;
    int n, m, pin = 0007, amount, entered_pin;
    cout << "========Welcome to Swiss Bank==========" << endl;
    while (balance > 0)
    {
        cout << "choose your Account Type" << endl;
        cout << "1.Savings account" << endl
             << "2.Current account" << endl;
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "Savings account" << endl;
            break;

        case 2:
            cout << "Current account" << endl;
            break;
        default:
            cout << "invalid choice" << endl;
            break;
        }
        cout << "1.Check balance    2.Withdrawal     3.exit " << endl;
        cin >> m;

        switch (m)
        {
        case 1:                                                  //check balance
            cout << "check balance" << endl;
            cout << "Enter pin:";
            cin >> entered_pin;
            if (entered_pin == pin)
            {
                cout << "Your current balance is:" << balance;
            }
            else
            {
                cout << "incorrect pin";
            }
            break;

        case 2:                                                   //withdrawal
            cout << "withdrawal" << endl;
            cout << "enter amount:";
            cin >> amount;
            cout << "Enter pin:";
            cin >> entered_pin;
            if (balance >= amount)                                //balance>=amount
            {
                if (entered_pin == pin)
                {

                    balance = balance - amount;
                    cout << "******Please collect your cash******" << endl
                         << amount << endl
                         << endl;
                    cout << "Available balance:" << balance << endl
                         << endl;
                    cout << "**//  collect your card   //**" << endl
                         << endl;
                }
                else
                {
                    cout << "incorrect pin";
                }
            }
            else                                                 //insufficient balance
            {
                cout << "insufficient balance" << endl;
                break;
            }
            break;
        case 3:
            cout << "Thankyou for using Swiss bank " << endl;
            return 0;
        default:
            cout << "invalid choice" << endl;
            break;
        }

        cout << "========Welcome to Swiss Bank==========" << endl;
    }

    return 0;
}