#include <iostream>
using namespace std;
void playhours(int holidays);
main()
{
	while (true)
	{
		int holidays;
		cout << "Enter the number of holidays: ";
		cin >> holidays;
		playhours(holidays);
	}
}
void playhours(int holidays)
{
	int workingdays, holidaymins, workingmins, totalholidaymins, totalworkingmins, totalmins;
	workingmins = 63;
	holidaymins = 127;
	workingdays = 365 - holidays;
	totalholidaymins = holidays * holidaymins;
	totalworkingmins = workingdays * workingmins;
	totalmins = totalholidaymins + totalworkingmins;
	if (totalmins <= 30000)
	{
		cout << "Tom Sleeps Well." << endl;
		int sleepmins = 30000 - totalmins;
		int totalhours = sleepmins / 60;
		cout << "Tom will sleep " << totalhours << " hours." << endl;
		cout << endl;
	}
	if (totalmins > 30000)
	{
		cout << "Tom will run away." << endl;
		int playmins = totalmins - 30000;
		int playhours = playmins / 60;
		cout << "Tom will sleep " << playhours << " hours less." << endl;
		cout << endl;
	}
}
 