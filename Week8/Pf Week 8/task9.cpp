#include <iostream>
using namespace std;
main()
{
    string name;
    int count;
    cout << "Enter Name: ";
    getline(cin, name);
    count = name.length();
    if (count % 2 == 0)
    {
        cout << "String is Even." << endl;
    }
    else
    {
        cout << "String is odd." << endl;
    }
}
