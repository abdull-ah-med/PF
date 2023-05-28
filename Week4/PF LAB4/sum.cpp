#include <iostream>
using namespace std;
void showResult(int marks);
main()
{
 int marks;
 while (true)
 {
 cout << "Enter your marks: ";
 cin >> marks;
 showResult(marks);
 } 
}
void showResult(int marks)
{
 if (marks > 50)
 {
    cout << "You are pass" << endl;
 }
 if (marks < 50)
 {
    cout << "you are fail" << endl;
 }
 if (marks == 50)
 {
    cout << "Mehnat kro, taqreeban fail" << endl;
 }
}
