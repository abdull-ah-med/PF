#include <iostream>
using namespace std;
float discount(string day, string month, float amount);
main()
{
    string day, month;
    float amount, payable;
    cout << "Enter Total Amount: ";
    cin >> amount;
    cout << "Enter Day: ";
    cin >> day;
    cout << "Enter Month: ";
    cin >> month;
    payable = discount(day, month, amount);
    cout << "Payable amount: " << payable << endl;
}
float discount(string day, string month, float amount)
{
    float payable;
    if (day == "sunday" && (month == "october" || month == "august" || month == "march"))
    {
        payable = amount - (amount * 10) / 100;
    }
    else if (day == "monday" && (month == "november" || month == "december"))
    {
        payable = amount - (amount * 5) / 100;
    }
    else
    {
        payable = amount;
    }
    return payable;
}