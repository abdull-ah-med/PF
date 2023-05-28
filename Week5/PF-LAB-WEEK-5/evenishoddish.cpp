#include <iostream>
#include <iostream>
using namespace std;
string evenishoddish(int num);
main()
{
 int num;
 string eo;
 cout << "Enter a number: ";
 cin >> num;
 eo = evenishoddish(num);
 if (eo == "even")
  {
   cout << "The given number " << num << " is evenish." << endl;
  }
 if (eo == "odd")
  {
   cout << "The given number " << num << " is oddish." << endl;
  }
}  
string evenishoddish(int num)
{
 int a, b, c, d, e, w, v, x, y, sum;
 a = num % 10;
 w = num / 10;
 b = w % 10;
 v = w / 10;
 c = v % 10;
 x = v / 10;
 d = x % 10;
 y = x / 10;
 e = y % 10;
 sum = a + b + c + d + e;
 if (sum % 2 == 0)
  {
   string a;
   a = "even";
   return a;
  }
 if (sum%2 != 0)
  {
   string b = "odd";
   return b;
  }
}
 
 