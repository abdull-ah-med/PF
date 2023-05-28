#include <iostream>
using namespace std;
string sign, symbol;
string findsign(int date, string month);
main()
{
    int date;
    string month;
    cout << "Enter Day: ";
    cin >> date;
    cout << "Enter Month: ";
    cin >> month;
    findsign(date, month);
    cout << "Sign: " << sign << endl;
    cout << "Symbol: " << symbol << endl;
}
string findsign(int date, string month)
{
    if (month == "March")
    {
        if (date > 20 && date < 32)
        {
            sign = "Aries", symbol = "The Ram";
        }
        else if (date > 0 && date < 21)
        {
            sign = "Pisces", symbol = "The Fishes";
        }
    }
    else if (month == "April")
    {
        if (date >= 20 && date < 31)
        {
            sign = "Taurus", symbol = "The Bull";
        }
        else if (date > 0 && date <= 19)
        {
            sign = "Aries", symbol = "The Ram";
        }
    }
    else if (month == "May")
    {
        if (date >= 21 && date < 32)
        {
            sign = "Gemini", symbol = "The Twins";
        }
        else if (date > 0 && date <= 20)
        {
            sign = "Taurus", symbol = "The Bull";
        }
    }
    else if (month == "June")
    {
        if (date >= 21 && date < 32)
        {
            sign = "Cancer", symbol = "The Crab";
        }
        else if (date > 0 && date <= 20)
        {
            sign = "Gemini", symbol = "The Twins";
        }
    }
    else if (month == "July")
    {
        if (date >= 23 && date < 32)
        {
            sign = "Leo", symbol = "The Lion";
        }
        else if (date > 0 && date <= 22)
        {
            sign = "Cancer", symbol = "The Crab";
        }
    }
    else if (month == "August")
    {
        if (date >= 23 && date < 32)
        {
            sign = "Virgo", symbol = "The Virgin";
        }
        else if (date > 0 && date <= 22)
        {
            sign = "Leo", symbol = "The Loin";
        }
    }
    else if (month == "September")
    {
        if (date >= 23 && date < 32)
        {
            sign = "Libra", symbol = "The Scales";
        }
        else if (date > 0 && date <= 22)
        {
            sign = "Virgo", symbol = "The Virgin";
        }
    }
    else if (month == "October")
    {
        if (date >= 23 && date < 32)
        {
            sign = "Scorpio", symbol = "The Scorpian";
        }
        else if (date > 0 && date <= 22)
        {
            sign = "Libra", symbol = "The Scales";
        }
    }
    else if (month == "November")
    {
        if (date >= 22 && date < 32)
        {
            sign = "Saggittarius", symbol = "The Archer";
        }
        else if (date > 0 && date <= 21)
        {
            sign = "Scorpio", symbol = "The Scorpian";
        }
    }
    else if (month == "December")
    {
        if (date >= 22 && date < 32)
        {
            sign = "Capricon", symbol = "The Goat";
        }
        else if (date > 0 && date <= 21)
        {
            sign = "Saggittarius", symbol = "The Archer";
        }
    }
    else if (month == "January")
    {
        if (date >= 20 && date < 32)
        {
            sign = "Aquarius", symbol = "The Water Bearer";
        }
        else if (date > 0 && date <= 19)
        {
            sign = "Capricon", symbol = "The Goat";
        }
    }
    else if (month == "Feburary")
    {
        if (date >= 29 && date < 28)
        {
            sign = "Pisces", symbol = "The Fishes";
        }
        else if (date > 0 && date <= 18)
        {
            sign = "Aquarius", symbol = "The Water Bearer";
        }
    }
}