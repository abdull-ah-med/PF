#include <iostream>
using namespace std;
string weather(string humidity, string climate);
main()
{
string humdidtiy, climate, activity;
cout << "Enter Humidity(dry or humid): ";
cin >> humdidtiy;
cout << "Enter weather(warm or cold): ";
cin >> climate;
activity = weather(humdidtiy, climate);
cout << activity;
}
string weather(string humidity, string climate)
{
    string final;
    if (humidity == "dry" && climate == "warm")
    {
        final = "Play Tennis.";
    }
      if (humidity == "dry" && climate == "cold")
    {
        final = "Play Basketball.";
    }
      if (humidity == "humid" && climate == "warm")
    {
        final = "Play Swim.";
    }
      if (humidity == "humid" && climate == "cold")
    {
        final = "Watch TV.";
    }
    return final;
}