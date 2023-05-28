#include <iostream>
using namespace std;
main()
{
    string name;
    int count;
    cout << "Enter Name: ";
    getline(cin, name);
   count = name.length();
    for (int index = count; index >=0; index--)
    {
        cout << name[index];
    }
    
    cout << endl << "Total Characters: " << count << endl;
}
    