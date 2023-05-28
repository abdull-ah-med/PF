#include <iostream>
using namespace std;
main()
{
    int arraysize, transform;
    cout << "Enter ArraySize: ";
    cin >> arraysize;
    cout << "Enter number of times even-odd transformation need to be done: ";
    cin >> transform;

    int inputarray[arraysize];
    for (int idx = 0; idx < arraysize; idx++)
    {
        cout << "Enter: ";
        cin >> inputarray[idx];
    }
    for (int idx = 0; idx < arraysize; idx++)
    {
        if (inputarray[idx] % 2 != 0)
        {
            for (int i = 1; i <= transform; i++)
            {
                inputarray[idx] = inputarray[idx] + 2;
            }
        }
        else if (inputarray[idx] % 2 == 0)
        {
            for (int i = 1; i <= transform; i++)
            {
                inputarray[idx] = inputarray[idx] - 2;
            }
        }
        }
    for (int idx = 0; idx < arraysize; idx++)
    {
        cout << inputarray[idx] << " ";
    }
}