#include <iostream>
using namespace std;
main(){

int acceleration;
int initial_velocity;
int final_velocity;
int time;

cout << "Enter Initial Velocity:";
cin >> initial_velocity;
cout << "Enter Acceleration:";
cin >> acceleration;
cout << "Enter time: ";
cin >> time;
final_velocity = (acceleration * time) + initial_velocity;
cout << "Final velocity is: " << final_velocity << endl;
}