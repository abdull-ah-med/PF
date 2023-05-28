#include <iostream>
#include <cmath>
using namespace std;
main()
{
 float num1, num2, total, minimum, sqroot, cuberoot, square, upperround, lowerround;
 cout << "Enter Number 1: ";
 cin >> num1;
 cout << "Enter Number 2: ";
 cin >> num2;
 total = max(num1, num2);
 cout << total << " is the greater number." << endl;
 minimum = min(num1, num2);
 cout << minimum << " is the smaller number." << endl;
 sqroot = sqrt(num2);
 cout << "Sq. root of " << num2 << " is " << sqroot << endl;
 square = pow(num2, 2);
 cuberoot = cbrt(num2);
 cout << "Cube Root of Number 2 is: " << cuberoot << endl;
 cout << "square of " << num2 << " is " << square << endl;
 upperround = ceil(num2);
 cout << num2 << " rounded off to bigger number is " << upperround << endl; 
 lowerround = floor(num2);
 cout << num2 << " rounded off to smaller number is " << lowerround << endl;




}