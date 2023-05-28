#include <iostream>
using namespace std;
main(){
float bag_weight;
float bag_cost;
float area_covered;
float cost_per_pound;
float cost_per_sqfeet;

cout << "Enter the cost of the Fertilizer bag: ";
cin >> bag_cost;
cout << "Enter Bag Size in Pounds: ";
cin >> bag_weight;
cout << "Enter the Area covered by each bag in Square Feet: ";
cin >> area_covered;

cost_per_pound = bag_cost/bag_weight;
cost_per_sqfeet = bag_cost/area_covered;
cout << "-------------------------------------------------------------------" << endl;
cout << "Cost of Fertilizer per pound will be: " << cost_per_pound << endl;
cout << "Cost of Fertilizer per Square Feet will be: " << cost_per_sqfeet << endl;
}