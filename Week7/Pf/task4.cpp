#include <iostream>
#include <windows.h>
using namespace std;
int frequencychecker(int num, int digit);
main()
{
    int num, digit, frequency;
    cout << "Enter Number: ";
    cin >> num;
    cout << "Enter Digit: ";
    cin >> digit;
    frequency = frequencychecker(num, digit);
    cout << frequency;
}
int frequencychecker(int num, int digit)
{
    int a, frequency, num2;
    frequency = 0;
    num2 = 1;
    while (num2 > 0)
    {
        a = num % 10;
        num2 = num/10;
        num = num2;
        if (a == digit)
        {
            frequency = frequency + 1;
        }
        else
        {
            frequency = frequency;
        }
    }
    return frequency;
}