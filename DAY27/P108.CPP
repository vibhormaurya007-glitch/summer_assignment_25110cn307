// Write a program to Create marksheet generation system.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter total number of students: ";
    cin >> n;
    cin.ignore();

    vector<int> roll(n);
    vector<string> name(n);
    vector<int> physics(n);
    vector<int> chemistry(n);
    vector<int> maths(n);

    vector<int> total(n);
    vector<double> percentage(n);
    vector<string> grade(n);
    vector<string> result(n);

    cout << "\nEnter Roll Numbers:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> roll[i];
    }

    cin.ignore();

    cout << "\nEnter Student Names:\n";
    for (int i = 0; i < n; i++)
    {
        getline(cin, name[i]);
    }

    cout << "\nEnter Physics Marks:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> physics[i];
    }

    cout << "\nEnter Chemistry Marks:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> chemistry[i];
    }

    cout << "\nEnter Mathematics Marks:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> maths[i];
    }

    // Calculation
    for (int i = 0; i < n; i++)
    {
        total[i] = physics[i] + chemistry[i] + maths[i];

        percentage[i] = total[i] / 3.0;

        if (percentage[i] >= 90)
            grade[i] = "A+";
        else if (percentage[i] >= 80)
            grade[i] = "A";
        else if (percentage[i] >= 70)
            grade[i] = "B";
        else if (percentage[i] >= 60)
            grade[i] = "C";
        else if (percentage[i] >= 50)
            grade[i] = "D";
        else
            grade[i] = "F";

        if (physics[i] < 33 || chemistry[i] < 33 || maths[i] < 33)
            result[i] = "FAIL";
        else
            result[i] = "PASS";
    }

    cout << "\n==================== MARKSHEET ====================\n\n";

    cout << left
         << setw(8) << "Roll"
         << setw(20) << "Name"
         << setw(10) << "Physics"
         << setw(10) << "Chem"
         << setw(10) << "Maths"
         << setw(10) << "Total"
         << setw(12) << "%"
         << setw(10) << "Grade"
         << setw(10) << "Result"
         << endl;

    cout << string(100, '-') << endl;

    for (int i = 0; i < n; i++)
    {
        cout << left
             << setw(8) << roll[i]
             << setw(20) << name[i]
             << setw(10) << physics[i]
             << setw(10) << chemistry[i]
             << setw(10) << maths[i]
             << setw(10) << total[i]
             << setw(12) << fixed << setprecision(2) << percentage[i]
             << setw(10) << grade[i]
             << setw(10) << result[i]
             << endl;
    }

    return 0;
}