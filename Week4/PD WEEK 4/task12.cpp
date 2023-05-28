#include <iostream>
using namespace std;
void Rose(int roses, int white_roses, int tulips);
main()
{
 int roses, white_roses, tulips;
 cout << "Enter the Number of Roses: ";
 cin >> roses;
 cout << "Enter the Number of White Roses: ";
 cin >> white_roses;
 cout << "Enter the Number of Tulips: ";
 cin >> tulips;
 Rose(roses, white_roses, tulips);
}
void Rose(int roses, int white_roses, int tulips)
{
 double single_rose, final_rose_price, single_white_rose, final_whiterose_price, single_tulip_price, final_tulip_price, final;
 single_rose = 2.0;
 single_white_rose = 4.10;
 single_tulip_price = 2.50;
 final_rose_price = single_rose * roses;
 final_whiterose_price = single_white_rose * white_roses;
 final_tulip_price = single_tulip_price * tulips;
 final = final_rose_price + final_whiterose_price + final_tulip_price;
 if (final > 200)
 { 
  double discount, discount_percentage, discounted_price;
  discount_percentage = 0.2;
  discount = final * discount_percentage;
  discounted_price = final - discount;
  cout << "The Price After Discount is: $" << discounted_price << endl;
  cout << endl;
 }
 if (final <= 200)
 {
  cout << "The price of the flowers is: $" << final << endl;
 }
}
 