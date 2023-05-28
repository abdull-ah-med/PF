#include <iostream>
using namespace std;
main()
{
    int arraysize = 4;
    bool check = false;
    string input[arraysize];
    for (int idx = 0; idx < arraysize; idx++)
    {
        cout << "Enter: ";
        cin >> input[idx];
    }
    for (int idx = 0; idx < arraysize; idx++)
    {
        if (input[idx] == input[0] && input[idx] == input[1] && input[idx] == input[2] && input[idx] == input[3])
        {
            check = true;
            break;
        }
    }
    if (check == true)
    {
        cout << "True." << endl;
    }
    else{
        cout << "False." << endl;
    }
}