#include <iostream>
using namespace std;
string checkspeed(float speed);
main()
{
    float speed;
    string result;
    cout << "Enter Speed: ";
    cin >> speed;
    result = checkspeed(speed);
    cout << result;
}
string checkspeed(float speed)
{
    string result;
    if (speed >= 0 && speed <= 10)
    {
        result = "Slow";
    }
    else if (speed > 10 && speed <= 50)
    {
        result = "Average";
    }
    else if (speed > 50 && speed <= 150)
    {
        result = "Fast";
    }
    else if (speed > 150 && speed <= 1000)
    {
        result = "Ultra Fast";
    }
    else if (speed > 1000)
    {
        result = "SuperFast : Flash";
    }
    else
    {
        result = "try again";
    }
    return result;
}