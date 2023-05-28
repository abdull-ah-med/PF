#include <iostream>
using namespace std;

main(){

    int hours, mins, minsplusfifteen;
    cout << "Enter Time (hours): ";
    cin >> hours;
    cout << "(minutes): ";
    cin >> mins;
    minsplusfifteen = mins + 15;
    if (minsplusfifteen < 60)
    {
        cout << "Time after 15 mins will be: " << hours << ":" << minsplusfifteen;
    }
    if (minsplusfifteen >= 60)
    {
        int newhour, newmins;
        newhour = hours + 1;
        newmins = minsplusfifteen - 60;
        cout << "Time after 15 mins will be: " << newhour << ":" << newmins << endl;
    }

}
