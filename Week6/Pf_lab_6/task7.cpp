#include <iostream>
using namespace std;
float checkCost(string city, string itemname, float itemquantity);
main()
{
    string city, itemname;
    float itemquantity, cost;
    cout << "Enter City: ";
    cin >> city;
    cout << "Enter Item Name: ";
    cin >> itemname;
    cout << "Enter Item Quantity: ";
    cin >> itemquantity;
    cost = checkCost(city, itemname, itemquantity);
    cout << "The total cost is: " << cost << endl;
}
float checkCost(string city, string itemname, float itemquantity)
{
    float cost;
    if (city == "Sofia")
    {
        if (itemname == "coffee")
        {
            cost = 0.50 * itemquantity;
        }
        else if (itemname == "water")
        {
            cost = 0.80 * itemquantity;
        }
        else if (itemname == "beer")
        {
            cost = 1.20 * itemquantity;
        }
        else if (itemname == "sweets")
        {
            cost = 1.45 * itemquantity;
        }
        else if (itemname == "peanuts")
        {
            cost = 1.80 * itemquantity;
        }
    }

    else if (city == "Plovdiv")
    {
        if (itemname == "coffee")
        {
            cost = 0.40 * itemquantity;
        }
        else if (itemname == "water")
        {
            cost = 0.70 * itemquantity;
        }
        else if (itemname == "beer")
        {
            cost = 1.15 * itemquantity;
        }
        else if (itemname == "sweets")
        {
            cost = 1.30 * itemquantity;
        }
        else if (itemname == "peanuts")
        {
            cost = 1.50 * itemquantity;
        }
    }

    else if (city == "Varna")
    {
        if (itemname == "coffee")
        {
            cost = 0.45 * itemquantity;
        }
        else if (itemname == "water")
        {
            cost = 0.70 * itemquantity;
        }
        else if (itemname == "beer")
        {
            cost = 1.10 * itemquantity;
        }
        else if (itemname == "sweets")
        {
            cost = 1.35 * itemquantity;
        }
        else if (itemname == "peanuts")
        {
            cost = 1.55 * itemquantity;
        }
    }
    else 
    {
        cost = 0;
    }
    return cost;
}