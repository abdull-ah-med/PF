#include <iostream>
#include <windows.h>
using namespace std;
void printtable(int num);
main()
{
    system("cls");
    int num;
    cout << "Enter Number: ";
    cin >> num;
    printtable(num);
}
void printtable(int num)
{
    for (int count = 1; count < 11; count = count + 1)
    {
        int result = num * count;
        cout << num << " * " << count << " = " << result << endl;
    }
}