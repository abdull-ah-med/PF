#include <iostream>
using namespace std;
float lowestprice(string time, int km);
main()
{
    string time;
    int km;
    float finalfare;
    cout << "Enter Total KMs: ";
    cin >> km;
    cout << "Enter Time of the day: ";
    cin >> time;
    finalfare = lowestprice(time, km);
    cout << "Lowest fare is: " << finalfare << endl;
}
float lowestprice(string time, int km)
{
    float fare;
    if (km < 20)
    {
        if (time == "day")
        {
            fare = 0.7 + (0.79 * km);
        }
        else if (time == "night")
        {
            fare = 0.7 + (0.90 * km);
        }
    }
    if (km > 20)
    {
        if (km < 100 && km >= 20)
        {
            fare = (0.09 * km);
        }
        else if (km >= 100)
        {
            fare = (0.06 * km);
        }
    }
    return fare;
}