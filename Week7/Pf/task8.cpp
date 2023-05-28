#include <iostream>
using namespace std;
float calculatePrice(float money, int year);
main()
{
    float money, totalmoneyrequired, excessmoney, lessmoney;
    int year;
    cout << "Enter amount of inheritance received: ";
    cin >> money;
    cout << "Enter the year: ";
    cin >> year;
    totalmoneyrequired = calculatePrice(money, year);
    if (totalmoneyrequired < money)
    {
        excessmoney = money - totalmoneyrequired;
        cout << "Yes! He will have chill life and will have $" << excessmoney << " left." << endl;
    }
    else if (totalmoneyrequired > money)
    {
        lessmoney = totalmoneyrequired - money;
        cout << "He will need $" << lessmoney << " more to survive." << endl;
    }
}
float calculatePrice(float money, int year)
{
    int totalyears = year - 1800;
    float evenyears = 0, oddyears = 0, age, evenyearsmoney, oddyearsmoney = 0, totalmoneyrequired;
    if (totalyears % 2 == 0)
    {
        for (int count = 0; count <= totalyears; count = count + 2)
        {
            evenyears = evenyears + 1;
        }
        oddyears = totalyears - evenyears;
    }
    else if (totalyears % 2 != 0)
    {
        for (int count = 0; count <= totalyears; count = count + 2)
        {
            oddyears = oddyears + 1;
        }
        evenyears = totalyears - oddyears;
    }
    evenyearsmoney = evenyears * 12000;
    age = 18;
    for (int count = 1801; count <= year; count = count + 1)
    {
        age = age + 1;
        if (count % 2 != 0)
        {
            oddyearsmoney = oddyearsmoney + 12000 + (50 * age);
        }
        else if (count % 2 == 0)
        {
            oddyearsmoney = oddyearsmoney;
        }
    }
    totalmoneyrequired = evenyearsmoney + oddyearsmoney;
    return totalmoneyrequired;
}