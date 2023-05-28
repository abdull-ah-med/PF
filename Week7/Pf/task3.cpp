#include <iostream>
#include <windows.h>
using namespace std;
int totaldigits(int num);
main()
{
    int num, result;
    cout << "Enter Number: ";
    cin >> num;
    result = totaldigits(num);
    cout << result << endl;
}
int totaldigits(int num)
{
    int number, result = 0;
    while(number != 0)
    {
        number = num/10;
        num = number;
        result = result + 1;
    }
    return result;
}