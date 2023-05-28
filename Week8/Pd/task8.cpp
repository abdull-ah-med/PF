#include <iostream>
using namespace std;
main()
{
    int arraysize, totaltime = 0;
    cout << "Enter Array size: ";
    cin >> arraysize;
    string colors[arraysize];
    for (int i = 0; i < arraysize; i++)
    {
        cout << "Enter Color: ";
        cin >> colors[i];
    }
    totaltime = arraysize*2;
    for (int idx = 1; idx < arraysize; idx++)
    {
        if (colors[idx] != colors[idx + 1])
        {
            totaltime = totaltime + 1;
        }
    }
    cout << totaltime << endl;
}