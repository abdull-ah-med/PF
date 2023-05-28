#include <iostream>
using namespace std;
main()
{
    string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLLives", "TombRider"};
    string movie;
    int finalprice;
    cout << "Enter Movie: ";
    cin >> movie;
    for (int idx = 0; idx < 5; idx++)
    {
        if (movie == movies[idx])
        {
            if (idx % 2 == 0)
            {
                finalprice = 500 * 0.95;
                break;
            }
            else if (idx % 2 != 0)
            {
                finalprice = 500 * 0.9;
                break;
            }
        }
        else
        {
            continue;
        }
    }
    cout << "Final Price: " << finalprice << endl;
}