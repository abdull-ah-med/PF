#include <iostream>
#include <cmath>
using namespace std;
float h(int angle, int base);
main()
{
 system("cls");
 int angle, base;
 float height;
 cout << "Enter Angle of elevation in degrees: ";
 cin >> angle;
 cout << "Enter Base of triangle: ";
 cin >> base;
 height = h(angle, base);
 cout << "Height of the triangle will be: " << height << endl;
}
float h(int angle, int base)
{
  float angleinrad, angletan, height, degreetotan;
  degreetotan = 0.01745;
  angleinrad = angle * degreetotan;
  angletan = tan(angleinrad);
  height = angletan * base;
  return height;
}