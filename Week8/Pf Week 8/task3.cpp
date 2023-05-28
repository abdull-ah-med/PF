#include <iostream>
using namespace std;
main()
{
    int arraysize, numtofind;
    bool isfound = false;
    cout << "Enter Arraysize: ";
    cin >> arraysize;
    float findnum[arraysize];
    for (int index = 0; index < arraysize; index++)
    {
        cout << "Enter Number: ";
        cin >> findnum[index];
    }
    cout << "Enter the number to find: ";
    cin >> numtofind;
    for (int index = 0; index < arraysize; index++)
    {
        if (findnum[index] == numtofind)
        {
            isfound = true;
            break;
        }
    }
    if (isfound == true)
    {
        cout << "Number Found." << endl;
    }
    else
    {
        cout << "Number not found." << endl;
    }
}