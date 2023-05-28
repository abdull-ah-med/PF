#include <iostream>
using namespace std;
void calculateBill(string day, int amount);
main() 
{
 string day;
 int amount;
 while(true)
 {
  cout << "Enter Total Bill Amount: ";
  cin >> amount;
  cout << "Enter Day: ";
  cin >> day;
  calculateBill(day, amount);
  cout << endl;
 }
}

void calculateBill(string day, int amount)
{ 
 if (day == "sunday")
 {
  float payableamount;
  payableamount = amount - (amount * 0.1);
  cout << "Total Payable Amount is: " << payableamount << endl;
 }
 if (day != "sunday")
 {
  cout << "Total Payable Amount is: " << amount << endl;
 }
}