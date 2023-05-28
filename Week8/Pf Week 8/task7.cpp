#include <iostream>
using namespace std;
main()
{
    string name;
    int count, idx;
    cout << "Enter Name: ";
    getline(cin, name);
    idx = 0; 
    while (name[idx] != '\0')
    {
        cout << name[idx] << " is at index " << idx << endl;
        idx++;
    }
    cout << "Total Number of Characters are: " << idx << endl;
}