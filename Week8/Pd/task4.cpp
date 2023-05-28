#include <iostream>
using namespace std;
main()
{
    int arraysize;
    cout << "Enter Array Size: ";
    cin >> arraysize;
    int numbers[arraysize];
    for (int idx = 0; idx < arraysize; idx++)
    {
        cout << "Enter Number: ";
        cin >> numbers[idx];
    }
    for (int idx = 0; idx < arraysize; idx++)
    {
        if (numbers[idx] == 7)
        {
            cout << "Boom!" << endl;
            break;
        }
        else
        {
            if (idx == arraysize - 1)
            {
                cout << "There is no seven in the array." << endl;
            }
        }
    }
}