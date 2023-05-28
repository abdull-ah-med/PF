#include <iostream>
using namespace std;
main()
{
    string name;
    int rollno;
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Roll No.: ";
    cin >> rollno;
    if (name == "Ali")
    {
        if (rollno == 501)
        {
        cout << "Congratulations " << name << " Welcome to uet.";
        }
    }
    else 
    {
        cout << "Try again." << endl;
    }
}