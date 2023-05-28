#include <iostream>
using namespace std;
main(){
int sub_1;
int sub_2;
int sub_3;
int sub_4;
int sub_5;
float total_marks;
string name;
float percentage;

cout << "Enter Name: ";
cin >> name;
cout << "Enter Subject 1 marks: ";
cin >> sub_1;
cout << "Enter Subject 2 marks: ";
cin >> sub_2;
cout << "Enter Subject 3 marks: ";
cin >> sub_3;
cout << "Enter Subject 4 marks: ";
cin >> sub_4;
cout << "Enter Subject 5 marks: ";
cin >> sub_5;

total_marks = sub_1 + sub_2 + sub_3 + sub_4 + sub_5;
percentage = (total_marks / 500) * 100;
cout << "Your Name is: " << name << endl;
cout << "Your Percentage is: " << percentage << "%" << endl;
}