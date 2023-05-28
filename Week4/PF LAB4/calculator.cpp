#include <iostream>
using namespace std;
void add(int num1, int num2);
void prod(int num1, int num2);
void subtract(int num1,int num2);
void division(int num1, int num2);

main()
{
 int  num1, num2;
 char operation;
 while (true)
 {
  cout << "Enter Number 1: ";
  cin >> num1;
  cout << " \n";
  cout << "Enter Number 2: ";
  cin >> num2;
  cout << " \n";
  cout << "Enter Operator(/, *, +, -): ";
  cin >> operation;
  if (operation =='+')
  {
   add(num1, num2);
  }
  if (operation == '/')
  {
   division(num1, num2);
  }
  if (operation == '*')
  {
   prod(num1, num2);
  }
  if (operation == '-')
  {
   subtract(num1, num2);
  }
 }
}

void add(int num1, int num2)
{
 int sum;
 sum = num1 + num2;
 cout << "The sum is: " << sum << endl;
}
void prod(int num1, int num2)
{
 int product;
 product = num1 * num2;
 cout << "Product is: " << product << endl;
}
void subtract(int num1, int num2)
{
 int subtract;
 subtract = num1 - num2;
 cout << "Number 1 - Number 2: " << subtract << endl;
}
void division(int num1, int num2)
{
 int division;
 division = num1 / num2;
 cout << "Number 1 / Number 2: " << division << endl;
}
