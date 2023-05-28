#include <iostream>
using namespace std;
void isEligible(int age);
main()
{
 int age;
 while (true)
 {
  cout << "Enter your age: ";
  cin >> age;
  isEligible(age);
  cout << endl;
 }
}
void isEligible(int age)
{
 if (age >= 18)
 {
  cout << "You are ELIGIBLE to Vote." << endl;
 }
 if (age < 18)
 { 
  cout << "You are NOT ELIGIBLE to vote" << endl;
 }
}
