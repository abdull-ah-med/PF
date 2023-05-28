#include <iostream>
using namespace std;
int isgreater(int num1, int num2, int num3);
main()
{
    int num1, num2, num3, greatest;
    cout << "Enter Number 1: ";
    cin >> num1;
    cout << "Enter Number 2: ";
    cin >> num2;
    cout << "Enter Number 3: ";
    cin >> num3;
    greatest = isgreater(num1, num2, num3);
    cout << "The greatest number is: " << greatest << endl;
}
int isgreater(int num1, int num2, int num3)
{
    int great;
    if (num1 > num2 && num1 > num3)
    {
        great = num1;
    }
    else if (num2 > num1 && num2 > num3)
    {
        great = num2;
    }
    else if (num3 > num1 && num3 > num2)
    {
        great = num3;
    }
    else 
    {
        great = num3;
        cout << "Try Again." << endl;
        
    }
    return great;
}