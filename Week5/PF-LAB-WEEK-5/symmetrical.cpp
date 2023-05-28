#include <iostream>
using namespace std;
bool issymmetrical(int num1);
main()
{
 system("cls");
  int num1;
  bool istrue;
  cout << "Enter a three digit number: ";
  cin >> num1;
  istrue = issymmetrical(num1);
  if (istrue == true)
  { 
   cout << "The given number " << num1 << " is Symmetrical." << endl;
  }
  if (istrue == false)
  {
   cout << "The given number " << num1 << " is NOT Symmetrical." << endl;
  }
}
bool issymmetrical(int num1)
{
 int a, b, c, x, y, z;
 a = num1 % 10;
 x = num1 /10;
 b = x % 10;
 y = x /10;
 c = y % 10;

 if (a == c)
 {
  return true;
 }
 if (a != c)
 {
  return false;
 }
 return 0;
}
  
