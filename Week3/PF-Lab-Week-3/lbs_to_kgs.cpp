#include <iostream>
using namespace std;
main(){

float onelb_in_kg;
onelb_in_kg = 0.45;

float lbs;
float lbs_to_kgs;
cout << "Enter weight in LBs: ";
cin >> lbs;
lbs_to_kgs = lbs * onelb_in_kg;
cout << "Weight in pounds is: " << lbs_to_kgs << "Kgs" << endl; 
}