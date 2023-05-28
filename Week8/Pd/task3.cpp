#include <iostream>
using namespace std;
main()
{
    string input;
    int count;
    cout << "Enter a String: ";
    cin >> input;
    count = input.length();
    if (count % 2 == 0)
    {
        cout << "True." << endl;
    }
    else
    {
        cout << "False." << endl;
    }
}