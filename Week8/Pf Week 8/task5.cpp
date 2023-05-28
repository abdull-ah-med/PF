#include <iostream>
using namespace std;
main()
{
    int arraysize, numtwo;
    int product = 0;
    cout << "Enter Arraysize: ";
    cin >> arraysize;
    cout << "Enter Another Number: ";
    cin >> numtwo;
    float num[arraysize];
    for (int idx = 0; idx < arraysize; idx++)
    {
        cout << "Enter Number: ";
        cin >> num[idx];
    }
    for (int idx = arraysize - 1; idx >= 0; idx--)
    {
        product = numtwo * num[idx];
        cout << product << " " << endl;
    }

}