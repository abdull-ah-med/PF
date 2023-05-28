#include <iostream>
using namespace std;
main() {
float onedollarvalue;
onedollarvalue = 226.58;

float value_in_pkr;
int dollars;
cout << "Enter the amount: $";
cin >> dollars;
value_in_pkr = onedollarvalue * dollars;
cout << "The value in PKR is: PKR " << value_in_pkr << endl;
}