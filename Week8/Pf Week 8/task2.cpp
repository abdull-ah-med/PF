#include <iostream>
using namespace std;
main()
{
    int arraysize, average;
    cout << "Enter Size of Array: ";
    cin >> arraysize;
    float add[arraysize];
    for (int index = 0; index < arraysize; index++)
    {
        cout << "Enter Number" << index + 1 << ": ";
        cin >> add[index];
    }
    int sum = 0;
    for (int index = 0; index < arraysize; index++)
    {
        sum = sum + add[index];
    }
    average = sum / arraysize;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
}