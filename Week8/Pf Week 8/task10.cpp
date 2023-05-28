#include <iostream>
using namespace std;
main()
{
    bool isfound = false;
    string name;
    int count;
    char letter;
    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter the Char to find: ";
    cin >> letter;
    count = name.length();
    for (int index = 0; index < count; index++)
    {
        if (letter == name[index])
        {
            isfound = true;
            break;
        }
    }
    if (isfound == true)
    {
        cout << "Found." << endl;
    }
    else{
          cout << "Not Found." << endl;
    }
}
