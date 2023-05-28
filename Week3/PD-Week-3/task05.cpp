#include <iostream>
using namespace std;
main(){

float weight;
float days_required;
float days_per_kg;
days_per_kg = 15;

cout << "Enter Weight that you want to lose: ";
cin >> weight;
days_required = days_per_kg * weight;
cout << "It will take you " << days_required << " days to lose " << weight << " KGs" << endl;
}