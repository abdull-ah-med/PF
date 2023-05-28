#include <iostream>
using namespace std;
float calculateapartment(string month, int days);
float calculatestudio(string month, int days);
main()
{
    string month;
    int days;
    float finalcostapartment, finalcoststudio;
    cout << "Enter Month (May/June/July/August/September/October): ";
    cin >> month;
    cout << "Enter Days to Stay: ";
    cin >> days;
    finalcoststudio = calculatestudio(month, days);
    finalcostapartment = calculateapartment(month, days);
    cout << "Apartment Cost: $" << finalcostapartment << endl;
    cout << "Studio Cost: $" << finalcoststudio << endl;
}
float calculatestudio(string month, int days)
{
    float finalcost;
    if (month == "July" || month == "August")
    {
        finalcost = 76.0 * days;
    }
    else if (month == "June" || month == "September")
    {
        if (days <= 14)
        {
            finalcost = 75.20 * days;
        }
        else if (days > 14)
        {
            finalcost = ((75.20 * days) * 0.80);
        }
    }
    else if (month == "May" || month == "October")
    {
        if (days < 7)
        {
            finalcost = 50.0 * days;
        }
        else if (days > 7 && days < 15)
        {
            finalcost = ((50 * days) * 0.95);
        }
        else if (days > 14)
        {
            finalcost = ((50 * days) * 0.70);
        }
    }
    return finalcost;
}
float calculateapartment(string month, int days)
{
    float finalcostwithoutdiscount, finalcostapartment;
    if (days <= 14)
    {
        if (month == "July" || month == "August")
        {
            finalcostwithoutdiscount = 77.0 * days;
        }
        else if (month == "June" || month == "September")
        {
            finalcostwithoutdiscount = 68.70 * days;
        }
        else if (month == "May" || month == "October")
        {
            finalcostwithoutdiscount = 65 * days;
        }
        if (days <= 14)
        {
            finalcostapartment = finalcostwithoutdiscount;
        }
    }
    if (days > 14)
    {
        if (month == "July" || month == "August")
        {
            finalcostwithoutdiscount = 77.0 * days;
        }
        else if (month == "June" || month == "September")
        {
            finalcostwithoutdiscount = 68.70 * days;
        }
        else if (month == "May" || month == "October")
        {
            finalcostwithoutdiscount = 65 * days;
        }

        finalcostapartment = finalcostwithoutdiscount * 0.90;
    }
    return finalcostapartment;
}