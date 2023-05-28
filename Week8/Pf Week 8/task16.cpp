#include <iostream>
using namespace std;
main()
{
    string test;
    cout << "Enter A line: ";
    getline(cin, test);
    int count = test.length();
    for (int idx = 0; idx < count; idx++)
    {
        if (test[idx] == 'a' || test[idx] == 'A' || test[idx] == 'e' || test[idx] == 'E' || test[idx] == 'i' || test[idx] == 'I' || test[idx] == 'o' || test[idx] == 'O' || test[idx] == 'u' || test[idx] == 'U')
        {
            continue;
        }
        else{
            cout << test[idx];
        }
    }
}
