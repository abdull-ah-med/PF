#include <iostream>
using namespace std;
void Reverse(string input);
main()
{
 string input;
 cout << "Enter True or False: ";
 cin >> input;
 Reverse(input);
}
void Reverse(string input)
{
 if (input == "true")
 {
  cout << "False" << endl;
 }
 if (input == "false")
 {
  cout << "True" << endl;
 }
}