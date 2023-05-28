#include <iostream>
using namespace std;
void overspeeding();
void normal();
main()
{
 int speed;
 cout << "Enter the Speed of the car: ";
 cin >> speed;
 if (speed > 100)
 {
  overspeeding();
 }
 if (speed <= 100)
 {
  normal();
 }
}
void overspeeding()
{
 cout << "Halt....YOU WILL BE CHALLENGED!!!" << endl;
 cout << endl;
}
void normal()
{
 cout << "Perfect! You're going good." << endl;
 cout << endl;
}