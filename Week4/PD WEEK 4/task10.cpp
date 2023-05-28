#include <iostream>
using namespace std;
void Pakistan(string country);
void Ireland(string country);
void India(string country);
void England(string country);
void Canada(string country);
main()
{
 string country;
 cout << "Enter Destination: ";
 cin >> country;
 while (true)
 {
  if (country == "Pakistan")
  {
   Pakistan(country);
  }
  if (country == "Ireland")
  {
   Ireland(country);
  }
  if (country == "India")
  {
   India(country);
  }
  if (country == "England")
  {
   England(country);
  }
  if (country == "Canada")
  {
   Canada(country);
  }
 }
}
void Pakistan(string country)
{
 int price;
 double discountpercentage, discount, finalprice;
 cout << "Enter Ticket Price in $:";
 cin >> price;
 discountpercentage = 0.05;
 discount = price * discountpercentage;
 finalprice = price - discount;
 cout << "The Ticket Price for " << country << " will be:$" << finalprice << endl;
 cout << endl;
}
void Ireland(string country)
{
 int price;
 double discountpercentage, discount, finalprice;
 cout << "Enter Ticket Price in $:";
 cin >> price;
 discountpercentage = 0.1;
 discount = price * discountpercentage;
 finalprice = price - discount;
 cout << "The Ticket Price for " << country << " will be:$" << finalprice << endl;
 cout << endl;
}
void India(string country)
{
 int price;
 double discountpercentage, discount, finalprice;
 cout << "Enter Ticket Price in $:";
 cin >> price;
 discountpercentage = 0.2;
 discount = price * discountpercentage;
 finalprice = price - discount;
 cout << "The Ticket Price for " << country << " will be:$" << finalprice << endl;
 cout << endl;
}
void England(string country)
{
 int price;
 double discountpercentage, discount, finalprice;
 cout << "Enter Ticket Price in $:";
 cin >> price;
 discountpercentage = 0.3;
 discount = price * discountpercentage;
 finalprice = price - discount;
 cout << "The Ticket Price for " << country << " will be:$" << finalprice << endl;
 cout << endl;
}
void Canada(string country)
{
 int price;
 double discountpercentage, discount, finalprice;
 cout << "Enter Ticket Price in $:";
 cin >> price;
 discountpercentage = 0.45;
 discount = price * discountpercentage;
 finalprice = price - discount;
 cout << "The Ticket Price for " << country << " will be:$" << finalprice << endl;
 cout << endl;
}
