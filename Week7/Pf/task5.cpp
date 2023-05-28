#include <iostream>
#include <windows.h>
using namespace std;
int calculateGCD(int num1, int num2);
int calculateLCM(int num1, int num2, int gcd);
main()
{
    int num1, num2, gcd;
    cout << "Enter Number 1: ";
    cin >> num1;
    cout << "Enter Number 2: ";
    cin >> num2;
    gcd = calculateGCD(num1, num2);
    cout << gcd;
}
int calculateGCD(int num1, int num2)
{
    int gcd, minnum, maxnum, b, c;
    if ((num1 > 0) && (num2 > 0))
    {
        if (num1 > num2)
        {
            minnum = num2;
            maxnum = num1;
        }
        else if (num2 > num1)
        {
            minnum = num1;
            maxnum = num2;
        }
    }
    gcd = maxnum % minnum;
    b = maxnum % gcd;
    if (b == 0)
    {
        return gcd;
    }
}