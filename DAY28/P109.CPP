// Write a program to Create library management system.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter total number of book:";
    cin >> n;
    cin.ignore();
    vector<string> book_id(n);
    vector<string> book_name(n);
    vector<string> author_name(n);
    vector<double> price(n);
    vector<string> status(n);
    cout << "Enter Book Id" << endl;
    for (int i = 0; i < n; i++)
    {
        getline(cin, book_id[i]);
    }
    cout << "Enter Book Name" << endl;
    for (int i = 0; i < n; i++)
    {
        getline(cin, book_name[i]);
    }
    cout << "Enter Author Name" << endl;
    for (int i = 0; i < n; i++)
    {
        getline(cin, author_name[i]);
    }
    cout << "Enter Price of book(in $)" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
        cin.ignore();
    }
    cout << "Enter Status of Book" << endl;
    for (int i = 0; i < n; i++)
    {
        getline(cin, status[i]);
    }
    cout << endl;

    cout << "=============Welcome to Mooney's Book store==============" << endl
         << endl;
    cout << "--> Here's the list of Books in our store " << endl
         << endl;

    cout << left
         << setw(10) << "S.No"
         << setw(15) << "Book Id"
         << setw(40) << "Book Name"
         << setw(20) << "Author Name"
         << setw(10) << "Price"
         << setw(20) << "Book Status"
         << endl;
    for (int i = 0; i < n; i++)
    {
        cout << left
             << setw(10) << i + 1
             << setw(15) << book_id[i]
             << setw(40) << book_name[i]
             << setw(20) << author_name[i]
             << setw(10) << price[i]
             << setw(10) << status[i]
             << endl;
    }
    cout << endl;
    while (true)
    {
        cout << "1.Search Book by ID" << endl
             << "2.Search Book by Name" << endl
             << "3.Search Book by Author Name" << endl
             << "4.Exit" << endl;
        string Id;

        string Name;
        string author;
        int m;
        cin >> m;
        cin.ignore();
        switch (m)
        {
        case 1:
        {
            int found = 0;
            cout << "Enter Book Id:";
            getline(cin, Id);
            for (int i = 0; i < n; i++)
            {
                if (Id == book_id[i])
                {

                    cout << left
                         << setw(30) << "Book Name  :"
                         << book_name[i]
                         << endl
                         << setw(30) << "Author  :"
                         << author_name[i]
                         << endl
                         << setw(30) << "Price  :"
                         << price[i]
                         << endl
                         << setw(30) << "Status  :"
                         << status[i];
                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                cout << "Book not found";
            }
            break;
        }
        case 2:
        {
           int found = 0;
            cout << "Enter Book Name:";
            getline(cin, Name);
            for (int i = 0; i < n; i++)
            {
                if (Name == book_name[i])
                {
                    cout << left
                         << setw(30) << "Book Name  :"
                         << book_name[i]
                         << endl
                         << setw(30) << "Author  :"
                         << author_name[i]
                         << endl
                         << setw(30) << "Price  :"
                         << price[i]
                         << endl
                         << setw(30) << "Status  :"
                         << status[i];
                    found = 1;
                    break;
                }
            }
            if (found == 0)
            {
                cout << "Book not found";
            }
            break;
        }
        case 3:
        {
            cout << "Enter Author Name:";
            getline(cin, author);
            cout << "Here are the Books published by  " << author << endl<<endl;
            cout << left
                 << setw(30) << "Book Title"
                 << setw(10) << "Price"
                 << setw(30) << "Status"
                 << endl;

            for (int i = 0; i < n; i++)
            {
                if (author == author_name[i])
                {
                    cout << left
                         << setw(30) << book_name[i]
                         << setw(10) << price[i]
                         << setw(30) << status[i]
                         << endl;
                }
            }
            break;
        }
        case 4:
        {
            cout << "Thanks for Visting Mooney's Book store" << endl
                 << "Good Bye";
            return 0;
        }
        default:
        {
            cout << "invalid input";
        }
        }
    }
    return 0;
}