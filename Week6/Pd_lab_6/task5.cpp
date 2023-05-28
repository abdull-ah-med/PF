#include <iostream>
using namespace std;
float calculatebill(string day, string fruit, float quantity);
main()
{
    string day, fruit;
    float quantity, finalcost;
    cout << "Enter Day: ";
    cin >> day;
    cout << "Enter Fruit Name: ";
    cin >> fruit;
    cout << "Enter Quantity: ";
    cin >> quantity;
    finalcost = calculatebill(day, fruit, quantity);
    cout << "Cost for the fruits is: $" << finalcost << endl;
}
float calculatebill(string day, string fruit, float quantity)
{
    float finalcost;
    if (day == "Saturday" || day == "Sunday")
    {
        if (fruit == "banana")
        {
            finalcost = quantity * 2.70;
        }
        else if (fruit == "apple")
        {
            finalcost = quantity * 1.25;
        }
        else if (fruit == "orange")
        {
            finalcost = quantity * 0.90;
        }
        else if (fruit == "grapefruit")
        {
            finalcost = quantity * 1.60;
        }
        else if (fruit == "kiwi")
        {
            finalcost = quantity * 3.0;
        }
        else if (fruit == "pineapple")
        {
            finalcost = quantity * 5.60;
        }
        else if (fruit == "grapes")
        {
            finalcost = quantity * 4.20;
        }
        else
        {
            finalcost = 0;
        }
    }
    else if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday")
    {
        if (fruit == "banana")
        {
            finalcost = quantity * 2.50;
        }
        else if (fruit == "apple")
        {
            finalcost = quantity * 1.2;
        }
        else if (fruit == "orange")
        {
            finalcost = quantity * 0.85;
        }
        else if (fruit == "grapefruit")
        {
            finalcost = quantity * 1.45;
        }
        else if (fruit == "kiwi")
        {
            finalcost = quantity * 2.70;
        }
        else if (fruit == "pineapple")
        {
            finalcost = quantity * 5.50;
        }
        else if (fruit == "grapes")
        {
            finalcost = quantity * 3.85;
        }
        else{
            finalcost = 0;
        }
    }
    else
    {
        finalcost = 0;
    }
    return finalcost;
}