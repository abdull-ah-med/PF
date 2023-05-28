#include <iostream>
#include <cmath>
using namespace std;
float calculateplayhours(string leap, int p, int h);
main()
{
    string leap;
    int p, h;
    float total_times_played;
    cout << "Enter Year(normal or leap): ";
    cin >> leap;
    cout << "Enter the number of holidays (other then saturday,sunday): ";
    cin >> p;
    cout << "Enter the count of weekends, in which Valdimir visited his hometown: ";
    cin >> h;
    total_times_played = calculateplayhours(leap, p, h);
    cout << floor(total_times_played);
}
float calculateplayhours(string leap, int p, int h)
{
    float holidays_to_play, weekends_in_sofia, free_weekends, weekends_played, totaltimesplayed;
    holidays_to_play = p * 0.67;
    free_weekends = 48 * 0.75;
    weekends_in_sofia = free_weekends - h;
    weekends_played = holidays_to_play + free_weekends;
    if (leap == "leap")
    {
        totaltimesplayed = weekends_played + (weekends_played * 0.15);
    }
    else
    {
        totaltimesplayed = weekends_played;
    }
    return totaltimesplayed;
}