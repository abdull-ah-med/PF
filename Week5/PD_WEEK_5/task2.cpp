#include <iostream>
using namespace std;
double volume(double length, double width, double heightV);
double conver(string unit);
double V, finalV;
string resultunit;

main()
{
    double length, width, height;
    string unit;
    cout << "Enter Length(in meters): ";
    cin >> length;
    cout << "Enter Width(in meters): ";
    cin >> width;
    cout << "Enter Height(in meters): ";
    cin >> height;
    cout << "Enter the Result Unit Required(mm, km, cm): ";
    cin >> unit;
    volume(length, width, height);
    conver(unit);
    cout << "Volume of the pyramid will be: " << finalV << " " << resultunit << endl;
}
double volume(double length, double width, double height)
{
    V = (length * width * height) / 3;
}
double conver(string unit)
{
    if (unit == "millimeters")
    {
        finalV = V * 1000000000;
        resultunit = "cubic millimeters";
    }
    if (unit == "kilometers")
    {
        finalV  = V * 0.000000001;
        resultunit = "cubic kilometers";
    }
    if (unit == "centimeters")
    {
        finalV = V * 1000000;
        resultunit = "Cubic CentiMeters";
    }
}