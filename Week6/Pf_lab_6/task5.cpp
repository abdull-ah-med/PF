#include <iostream>
using namespace std;
float totalincome(string screen, float rows, float columns);
main()
{
    float rows, columns, price, income;
    string screen;
    cout << "Enter Screen: ";
    cin >> screen;
    cout << "Enter Rows: ";
    cin >> rows;
    cout << "Enter Columns: ";
    cin >> columns;
    income = totalincome(screen, rows, columns);
    cout << "Total Income is: " << income << endl;
}
float totalincome(string screen, float rows, float columns)
{
    float income;
    float totalseats = rows * columns;
    if(screen == "premiere")
    {
        income = totalseats * 12.0;
    }
    else if (screen == "normal")
    {
        income = totalseats * 7.5;
    }
     else if (screen == "discount")
    {
        income = totalseats * 5.0;
    }
    else 
    {
        income = 0;
    }
    return income;
}