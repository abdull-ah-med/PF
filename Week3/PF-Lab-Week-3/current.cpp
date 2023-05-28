#include <iostream>
using namespace std;
int main() {
float charge;
int time;
float current;

cout << "Enter the amount of charge: ";
cin >> charge;
cout << "Enter the time: ";
cin >> time;
current = charge/time;
cout << "The current will be: " << current << endl;
}