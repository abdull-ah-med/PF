#include <iostream>
#include <cmath>
using namespace std;
int hourscalculation(int neededhours, int daysgiven, int workers);
main()
{
    int neededhours, daysgiven, workers, totalworkhours;
    cout << "Enter Hours Needed: ";
    cin >> neededhours;
    cout << "Enter Days Given: ";
    cin >> daysgiven;
    cout << "Enter Number of Workers: ";
    cin >> workers;
    totalworkhours = hourscalculation(neededhours, daysgiven, workers);
    if (totalworkhours > neededhours)
    {
        int remaininghours = totalworkhours - neededhours;
        cout << "Yes! " << remaininghours << " hours left." << endl;
    }
    if (neededhours > totalworkhours)
    {
        int remaininghours = neededhours - totalworkhours;
        cout << "Not enough time. " << remaininghours << " hours needed." << endl;
    }
}
int hourscalculation(int neededhours, int daysgiven, int workers)
{
    int workhoursperday, totalworkhoursperday, totalworkhours;
    workhoursperday = 10 * 0.9;
    totalworkhoursperday = workhoursperday * workers;
    totalworkhours = totalworkhoursperday * daysgiven;
    return totalworkhours;
    
}
