#include <iostream>
using namespace std;
main()
{
    int totalr, RT;
    RT = 0;
    cout << "Enter Total Resistors: ";
    cin >> totalr;
    float R[totalr];
    for (int idx = 0; idx < totalr; idx++)
    {
        cout << "Enter Resistance of resistor " << idx + 1 << ": ";
        cin >> R[idx];
    }
    for (int idx = 0; idx < totalr; idx++)
    {
        RT = RT + R[idx];
    }
    cout << "Total Resistance: " << RT << " ohms." << endl;
}