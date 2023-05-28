#include <iostream>
using namespace std;
main()
{
    string input1, input2;
    int count1, count2;
    int count3 = 0;
    cout << "Enter String 1: ";
    cin >> input1;
    cout << "Enter String 2: ";
    cin >> input2;
    count1 = input1.length();
    count2 = input2.length();
    for (int idx = 0; idx < count1; idx++)
    {
        for (int i = 0; i < count2; i++)
        {
            if (input1[idx] == input2[i])
            {
                count3 = count3 + 1;
                input2[i] = '.';
                break;
            }
        }
    }
    cout << count3 << endl;
}