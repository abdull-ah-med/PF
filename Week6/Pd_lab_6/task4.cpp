#include <iostream>
using namespace std;
float calculatebill(int mins, char servicecode, char time);
main()
{
    float mins, finalcost;
    char servicecode, time;
    cout << "Enter Service Code(Premium or Residential): ";
    cin >> servicecode;
    cout << "Emter minutes used: ";
    cin >> mins;
    cout << "Press 'D' for daytime or press 'N' for night time: ";
    cin >> time;
    finalcost = calculatebill(mins, servicecode, time);
    cout << "Your bill is $" << finalcost << endl;
}
float calculatebill(int mins, char servicecode, char time)
{
    float finalcost, minstocharge;
    if (servicecode == 'r' || servicecode == 'R')
    {
        if (mins <= 50)
        {
            finalcost = 10;
        }
        else if (mins > 50)
        {
            minstocharge = mins - 50;
            finalcost = (minstocharge * 0.20) + 10;
        }
    }
    else if (servicecode == 'p' || servicecode == 'P')
    {
        if (time == 'D')
        {
            if (mins <= 75)
            {
                finalcost = 25.0;
            }
            else if (mins > 75)
            {
                minstocharge = mins - 75;
                finalcost = 25 + (minstocharge * 0.10);
            }
        }
        else if (time == 'N')
        {
            if (mins <= 100)
            {
                finalcost = 25.0;
            }
            else if (mins > 100)
            {
                minstocharge = mins - 100;
                finalcost = 25.0 + (minstocharge * 0.05);
            }
        }
    }
    else
    {
        finalcost = 0;
    }
    return finalcost;
}