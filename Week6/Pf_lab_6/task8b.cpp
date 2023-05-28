#include <iostream>
#include <cmath>
using namespace std;
float calculate(int budget, int people);
float calculatefinal(float budgetagtertravel, float totalticeketprice);
main()
{
    int budget, people;
    float budgetaftertravel, extrabudget, deficientbudget, totalticketprice, finalbudget;
    string category;
    cout << "Enter Total Budget: ";
    cin >> budget;
    cout << "Enter the number of people: ";
    cin >> people;
    cout << "Enter Category: ";
    cin >> category;
    if (category == "VIP")
    {
        totalticketprice = people * 499.99;
        budgetaftertravel = calculate(budget, people);

        if (budgetaftertravel >= totalticketprice)
        {
            finalbudget = calculatefinal(budgetaftertravel, totalticketprice);
            cout << "Yes! You have " << finalbudget << " QR left.";
        }
        else if (budgetaftertravel < totalticketprice)
        {
            finalbudget = calculatefinal(budgetaftertravel, totalticketprice);
            cout << "No! You need " << finalbudget << " QR more.";
        }
    }

    else if (category == "normal")
    {
        totalticketprice = people * 249.99;
        budgetaftertravel = calculate(budget, people);

        if (budgetaftertravel >= totalticketprice)
        {
            finalbudget = calculatefinal(budgetaftertravel, totalticketprice);
            cout << "Yes! You have " << finalbudget << " QR left.";
        }
        else if (budgetaftertravel < totalticketprice)
        {
            finalbudget = calculatefinal(budgetaftertravel, totalticketprice);
            cout << "No! You need " << finalbudget << " QR more.";
        }
    }
}
float calculatefinal(float budgetaftertravel, float totalticketprice)
{
    float extrabudget, deficientbudget, finalbudget;

    if (budgetaftertravel >= totalticketprice)
    {
        extrabudget = budgetaftertravel - totalticketprice;
        finalbudget = ceil(extrabudget * 100.0) / 100.0;
    }
    else if (budgetaftertravel < totalticketprice)
    {
        deficientbudget = totalticketprice - budgetaftertravel;
        finalbudget = ceil(deficientbudget * 100.0) / 100.0;
    }
    return finalbudget;
}

float calculate(int budget, int people)
{
    float budgetaftertravel;
    if (people >= 1 && people < 5)
    {
        budgetaftertravel = budget - (budget * 0.75);
    }
    else if (people > 4 && people < 10)
    {
        budgetaftertravel = budget - (budget * 0.6);
    }

    else if (people > 9 && people < 25)
    {
        budgetaftertravel = budget - (budget * 0.50);
    }
    else if (people > 24 && people < 50)
    {
        budgetaftertravel = budget - (budget * 0.40);
    }
    else if (people > 49)
    {
        budgetaftertravel = budget - (budget * 0.25);
    }
    return budgetaftertravel;
}
