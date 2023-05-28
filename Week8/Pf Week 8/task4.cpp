#include <iostream>
using namespace std;
main()
{
    int arraysize;
    cout << "Enter Arraysize: ";
    cin >> arraysize;
    float printnum[arraysize];
    for (int idx = 0; idx < arraysize; idx++)
    {
        cout << "Enter Number: ";
        cin >> printnum[idx];
    }
    for(int idx = arraysize - 1; idx >=0; idx--)
    {
        cout << printnum[idx] << endl;
    }
}