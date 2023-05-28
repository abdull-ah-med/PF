#include <iostream>
using namespace std;
main()
{
    int sum = 0;
    for (int count = 1; count <= 100; count = count + 1)
    {
        if (count % 2 == 0)
        {
            cout << count << endl;
        }
    }
}