#include <iostream>
using namespace std;
main()
{
    string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    int arraysize = 4, num;
    string result[arraysize];
    int pin[arraysize];
    for (int idx = 0; idx < arraysize; idx++)
    {
        cout << "Enter PIN: ";
        cin >> pin[idx];
    }
    for (int idx = 0; idx < arraysize; idx++)
    {
        if (pin[idx] == 0 || pin[idx] == 1 || pin[idx] == 2 || pin[idx] == 3 || pin[idx] == 4 || pin[idx] == 5 || pin[idx] == 6 || pin[idx] == 7 || pin[idx] == 8 || pin[idx] == 9)
        {
            num = pin[idx] + idx;
            if (num < 10)
            {
                result[idx] = moves[num];
            }
            else if (num > 9)
            {
                num = num - 10;
                result[idx] = moves[num];
            }
        }
    }
    for (int idx = 0; idx < arraysize; idx++)
    {
        cout << result[idx] << " ";
    }
}