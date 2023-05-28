#include <iostream>
using namespace std;
void isEven(int number);
main() 
{
  int number;
  while (true)
 {
   cout << "Enter Number: ";
   cin >> number;
   isEven(number);
   cout << endl;
 }
}
void isEven(int number)
{
  if (number % 2 == 0)
  {
   cout << "The given number " << number << " is even.";
  }
  if (number % 2 != 0)
  {
   cout << "The given number " << number << " is odd.";
  }
}