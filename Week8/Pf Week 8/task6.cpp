#include <iostream>
using namespace std;
main()
{
    int arraysize, smallnum;
    cout << "Enter Arraysize: ";
    cin >> arraysize;
    float findnum[arraysize];
    for (int index = 0; index < arraysize; index++)
    {
        cout << "Enter Number: ";
        cin >> findnum[index];
    }
    smallnum = findnum[0];
    for (int index = 0; index < arraysize; index++)
    {
        if (smallnum > findnum[index])
        {
            smallnum = findnum[index];
        }
        else{
            smallnum = smallnum;
        }
    }
    cout << smallnum;
}
