#include <iostream>
#include <cmath>
using namespace std;
float positivequaderatic(float a, float b, float c);
float negativequaderatic(float a, float b, float c);
main()
{
 system("cls");
 float a, b, c, positive_x, negative_x;
 cout << "Enter A: ";
 cin >> a;
 cout << "Enter B: ";
 cin >> b;
 cout << "Enter C: ";
 cin >> c;
 positive_x = positivequaderatic(a, b, c);
 negative_x = negativequaderatic(a, b, c);
 cout << "The roots of the given Equation will be : " << positive_x << ", " << negative_x << endl;

}  
float positivequaderatic(float a, float b, float c)
{
 float sq_b, sqroot, positive_x, negative_x;
 sq_b = pow(b, 2);
 sqroot = sqrt(sq_b - (4 * a * c));
 positive_x = (((-1  * b) + sqroot) / (2 * a));
 negative_x = (((-1  * b) - sqroot) / (2 * a));
 return positive_x;
}
float negativequaderatic(float a, float b, float c)
{
 float sq_b, sqroot, positive_x, negative_x;
 sq_b = pow(b, 2);
 sqroot = sqrt(sq_b - (4 * a * c));
 positive_x = (((-1  * b) + sqroot) / (2 * a));
 negative_x = (((-1  * b) - sqroot) / (2 * a));
 return negative_x;
}
 
 