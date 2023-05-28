#include <iostream>
#include <cmath>
using namespace std;
float calculateplayhours(string leap, int p, int h);
main()
{
    while (true)
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
}
float calculateplayhours(string leap, int p, int h)
{
    float holidays_to_play, weekends_in_sofia, free_weekends, weekends_played_in_sofia, totalweekendsplayed, totaltimesplayed;
    holidays_to_play = p * 2 / 3;
    weekends_in_sofia = 48 - h;
    free_weekends = weekends_in_sofia * 3 / 4;
    weekends_played_in_sofia = holidays_to_play + free_weekends;
    totalweekendsplayed = weekends_played_in_sofia + h;
    if (leap == "leap")
    {
        totaltimesplayed = totalweekendsplayed + (totalweekendsplayed * 0.15);
    }
    else
    {
        totaltimesplayed = totalweekendsplayed;
    }
    return totaltimesplayed;
}