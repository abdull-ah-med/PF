#include <iostream>
using namespace std;
main(){

float matric_marks;
float matric_percentage;
float matric_aggregate;
float inter_marks;
float inter_percentage;
float inter_aggregate;
float ecat_marks;
float ecat_percentage;
float ecat_aggregate;
float aggregate;
string name;

cout << "Enter your name: ";
cin >> name;

cout << "Enter your marks in matric(out of 1100): ";
cin >> matric_marks;
matric_percentage = matric_marks / 1100;
matric_aggregate = matric_percentage * 10;

cout << "Enter your marks in intermediate(out 0f 520): ";
cin >> inter_marks;
inter_percentage = inter_marks / 520;
inter_aggregate = inter_percentage * 40;

cout << "Enter your marks in ECAT(out of 400): ";
cin >> ecat_marks;
ecat_percentage = ecat_marks / 400;
ecat_aggregate = ecat_percentage * 50;

aggregate = ecat_aggregate + inter_aggregate + matric_aggregate;
cout << "Your Name is " << name << endl;
cout << "Your ECAT aggregate is " << aggregate << "%" << endl;

}