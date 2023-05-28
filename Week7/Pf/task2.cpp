#include <iostream>
#include <windows.h>
using namespace std;
void calculate(int num);
main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;
    calculate(num);
}
void calculate(int num)
{
    int previous = 0;
    int current = 1;
    int next = 0;
    cout << previous << ", " << current ;
    for (int count = 2; count <= num-1; count = count + 1)
    {
        next = previous + current;
        cout << " , " << next ;
        previous = current;
        current = next;
    }
}