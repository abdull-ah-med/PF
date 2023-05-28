#include <iostream>
using namespace std;
main()
{
    int arrsizeone, arrsizetwo, arrsizethree;
    arrsizeone = 2;
    float firstarray[arrsizeone];
    for (int idx = 0; idx < arrsizeone; idx++)
    {
        cout << "Enter Elements for first array: ";
        cin >> firstarray[idx];
    }
    cout << "Enter Second Array Size: ";
    cin >> arrsizetwo;
    float secondarray[arrsizetwo];
    for (int idx = 0; idx < arrsizetwo; idx++)
    {
        cout << "Enter Elements for second array: ";
        cin >> secondarray[idx];
    }
    arrsizethree = arrsizeone + arrsizetwo;
    float thirdarray[arrsizethree];
    thirdarray[0] = firstarray[0];
    for (int idx = 1; idx < arrsizethree - 1; idx++)
    {
        thirdarray[idx] = secondarray[idx-1];
    }
    thirdarray[arrsizethree-1] = firstarray[1];
    for (int idx = 0; idx < arrsizethree; idx++)
    {
        cout << thirdarray[idx];
    }
}