#include <iostream>
#include <cmath>
using namespace std;
void printPercentage(int totalnumber);
main()
{
    int totalnumber;
    cout << "Enter number: ";
    cin >> totalnumber;
    printPercentage(totalnumber);
}
void printPercentage(int totalnumber)
{
    int num1;
    float count1 = 0;
    float count2 = 0;
    float count3 = 0;
    float count4 = 0;
    float count5 = 0;
    float p1, p2, p3, p4, p5;
    for (int count; count < totalnumber; count++)
    {
        cout << "Enter: ";
        cin >> num1;
        if (num1 < 200)
        {
            count1 = count1 + 1;
        }
        else if (num1 >= 200 && num1 < 400)
        {
            count2 = count2 + 1;
        }
        else if (num1 >= 400 && num1 < 600)
        {
            count3 = count3 + 1;
        }
        else if (num1 >= 600 && num1 < 800)
        {
            count4 = count4 + 1;
        }
        else if (num1 >= 800)
        {
            count5 = count5 + 1;
        }
    }
    p1 = (count1 / totalnumber) * 100;
    p1 = floor(p1 * 100.0) / 100.0;
    p2 = (count2 / totalnumber) * 100;
    p2 = floor(p2 * 100.0) / 100.0;
    p3 = (count3 / totalnumber) * 100;
    p3 = floor(p3 * 100.0) / 100.0;
    p4 = (count4 / totalnumber) * 100;
    p4 = floor(p4 * 100.0) / 100.0;
    p5 = (count5 / totalnumber) * 100;
    p5 = floor(p5 * 100.0) / 100.0;

    cout << p1 << "%" << endl;
    cout << p2 << "%" << endl;
    cout << p3 << "%" << endl;
    cout << p4 << "%" << endl;
    cout << p5 << "%" << endl;
}