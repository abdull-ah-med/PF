#include <iostream>
using namespace std;
main()
{
    int arraysize;
    cout << "Enter Size of Array: ";
    cin >> arraysize;

    float cgpa[arraysize];
    for (int index = 0; index < arraysize; index++)
    {
        cout << "Enter CGPA of student " << index + 1 << ": ";
        cin >> cgpa[index];
    }
    for (int index = 0; index < arraysize; index++)
    {
        cout << cgpa[index] << ' ';
    }
}