#include <iostream>
#include <cmath>
using namespace std;
float calculatebudget(int budget, int people, string category);
main()
{
    int budget, people;
    string category;
    cout << "Enter Total Budget: ";
    cin >> budget;
    cout << "Enter the number of people: ";
    cin >> people;
    cout << "Enter Category: ";
    cin >> category;
    calculatebudget(budget, people, category);
}
float calculatebudget(int budget, int people, string category)
{
    float totalticketprice, budgetaftertravel, remainingbudget, deficientbudget;
    round(remainingbudget);

    if (category == "VIP")
    {
        totalticketprice = people * 499.99;
        if (people >= 1 && people < 5)
        {
            budgetaftertravel = budget - (budget * 0.75);
            if (budgetaftertravel >= totalticketprice)
            {
                remainingbudget = budgetaftertravel - totalticketprice;
                cout << "Yes! You have " << remainingbudget << " leva left.";
            }
            else
            {
                deficientbudget = totalticketprice - budgetaftertravel;
                cout << "No! You need " << deficientbudget << " leva more.";
            }
        }
        else if (people > 4 && people < 10)
        {
            budgetaftertravel = budget - (budget * 0.6);
            if (budgetaftertravel >= totalticketprice)
            {
                remainingbudget = budgetaftertravel - totalticketprice;
                cout << "Yes! You have " << remainingbudget << " leva left.";
            }
            else
            {
                deficientbudget = totalticketprice - budgetaftertravel;
                cout << "No! You need " << deficientbudget << " leva more.";
            }
        }
        else if (people > 9 && people < 25)
        {
            budgetaftertravel = budget - (budget * 0.50);
            if (budgetaftertravel >= totalticketprice)
            {
                remainingbudget = budgetaftertravel - totalticketprice;
                cout << "Yes! You have " << remainingbudget << " leva left.";
            }
            else
            {
                deficientbudget = totalticketprice - budgetaftertravel;
                cout << "No! You need " << deficientbudget << " leva more.";
            }
        }
        else if (people > 24 && people < 50)
        {
            budgetaftertravel = budget - (budget * 0.40);
            if (budgetaftertravel >= totalticketprice)
            {
                remainingbudget = budgetaftertravel - totalticketprice;
                cout << "Yes! You have " << remainingbudget << " leva left.";
            }
            else
            {
                deficientbudget = totalticketprice - budgetaftertravel;
                cout << "No! You need " << deficientbudget << " leva more.";
            }
        }
        else if (people > 49)
        {
            budgetaftertravel = budget - (budget * 0.25);
            if (budgetaftertravel >= totalticketprice)
            {
                remainingbudget = budgetaftertravel - totalticketprice;
                cout << "Yes! You have " << remainingbudget << " leva left.";
            }
            else
            {
                deficientbudget = totalticketprice - budgetaftertravel;
                cout << "No! You need " << deficientbudget << " leva more.";
            }
        }
    }

    else if (category == "Normal")
    {
        totalticketprice = people * 249.99;
        if (people >= 1 && people < 5)
        {
            budgetaftertravel = budget - (budget * 0.75);
            if (budgetaftertravel >= totalticketprice)
            {
                remainingbudget = budgetaftertravel - totalticketprice;
                cout << "Yes! You have " << remainingbudget << " leva left.";
            }
            else
            {
                deficientbudget = totalticketprice - budgetaftertravel;
                cout << "No! You need " << deficientbudget << " leva more.";
            }
        }
        else if (people > 4 && people < 10)
        {
            budgetaftertravel = budget - (budget * 0.6);
            if (budgetaftertravel >= totalticketprice)
            {
                remainingbudget = budgetaftertravel - totalticketprice;
                cout << "Yes! You have " << remainingbudget << " leva left.";
            }
            else
            {
                deficientbudget = totalticketprice - budgetaftertravel;
                cout << "No! You need " << deficientbudget << " leva more.";
            }
        }
        else if (people > 9 && people < 25)
        {
            budgetaftertravel = budget - (budget * 0.50);
            if (budgetaftertravel >= totalticketprice)
            {
                remainingbudget = budgetaftertravel - totalticketprice;
                cout << "Yes! You have " << remainingbudget << " leva left.";
            }
            else
            {
                deficientbudget = totalticketprice - budgetaftertravel;
                cout << "No! You need " << deficientbudget << " leva more.";
            }
        }
        else if (people > 24 && people < 50)
        {
            budgetaftertravel = budget - (budget * 0.40);
            if (budgetaftertravel >= totalticketprice)
            {
                remainingbudget = budgetaftertravel - totalticketprice;
                cout << "Yes! You have " << remainingbudget << " leva left.";
            }
            else
            {
                deficientbudget = totalticketprice - budgetaftertravel;
                cout << "No! You need " << deficientbudget << " leva more.";
            }
        }
        else if (people > 49)
        {
            budgetaftertravel = budget - (budget * 0.25);
            if (budgetaftertravel >= totalticketprice)
            {
                remainingbudget = budgetaftertravel - totalticketprice;
                cout << "Yes! You have " << remainingbudget << " leva left.";
            }
            else
            {
                deficientbudget = totalticketprice - budgetaftertravel;
                cout << "No! You need " << deficientbudget << " leva more.";
            }
        }
    }
}

