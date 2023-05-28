#include <iostream>
using namespace std;
int add(int num1, int num2);
float divided(int num1, int num2);
int isgreater(int num1, int num2);
main()
{
 int num1, num2, total, greater;
 float divide;
 cout << "Enter Number 1: ";
 cin >> num1;
 cout << "Enter Number 2: ";
 cin >> num2;
 divide = divided(num1, num2);
 total = add (num1, num2);
 cout << "Total sum is: " << total << endl;
 cout << "Number 1 divided by Number 2 is: " << divide << endl;
 greater = isgreater(num1, num2);
 cout << greater << " is the greater number." << endl;
 cout << "Program Ends." << endl;
}
int add(int num1, int num2)
{
 system("cls");
 int sum;
 sum = num1 + num2;
 return sum;
}
float divided(int num1, int num2)
{
 int divided = num1 / num2;
 return divided;
}
int isgreater(int num1, int num2)
{
 if (num1 > num2)
 {
  return num1;
 }
 if(num2 > num1)
 {
  return num2;
 }
 return 0;
}