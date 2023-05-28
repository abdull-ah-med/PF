#include <iostream>
#include <cmath>
float calculateMoney(int age, int priceoftoys);
using namespace std;
main()
{
    float age, priceofiphone, priceoftoys, totalmoney;
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter the price of iPhone 14 pro max 1TB LLA: ";
    cin >> priceofiphone;
    cout << "Enter the price of each toy: ";
    cin >> priceoftoys;
    totalmoney = calculateMoney(age, priceoftoys);
    if (totalmoney > priceofiphone)
    {
        float excessmoney = totalmoney - priceofiphone;
        cout << "Yes! You have $" << excessmoney << " extra. " << endl;
    }
    else if (totalmoney < priceofiphone)
    {
        float lessmoney = priceofiphone - totalmoney;
        cout << "No! You need $" << lessmoney << " more. " << endl;
    }
}
float calculateMoney(int age, int priceoftoys)
{
    int evenage, oddage, bdaymoney, brocut, increment, totalmoney;
    evenage = 0;
    oddage = 0;
    bdaymoney = 0;
    increment = 0;
    if (age % 2 == 0)
    {
        for (int count = 2; count <= age; count = count + 2)
        {
            evenage = evenage + 1;
        }
        oddage = age - evenage;
    }
    else if (age % 2 != 0)
    {
        for (int count = 1; count <= age; count = count + 2)
        {
            oddage = oddage + 1;
        }
        evenage = age - oddage;
    }
    for (int a = 1; a <= evenage; a++)
    {
        increment = increment + 10;
        bdaymoney = bdaymoney + increment;
    }
    brocut = evenage;
    totalmoney = (bdaymoney - brocut) + (oddage * priceoftoys);
    return totalmoney;
}
