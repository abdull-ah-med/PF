#include <iostream>
#include <cmath>
using namespace std;
int power(int num, int num2);
main()
{
    system("cls");
    int num, num2, result;
    cout << "Enter 1st number: ";
    cin >> num;
    cout << "Enter 2nd number: ";
    cin >> num2;
    result = power(num, num2);
    cout << "Number 1 (" << num << ") raised to the 2nd number (" << num2 << ") is: " << result << endl;
}
int power(int num, int num2)
{
    int a = pow(num, num2);
    return a;
}