#include <iostream>
using namespace std;
main()
{
    string name;
    int count, total;
    char letter;
    cout << "Enter Name: ";
    getline(cin, name);
    count = name.length();
    total = 0;
    for (int idx = 0; idx < count; idx++)
    {
        if (name[idx] == 'a' || name[idx] == 'e' || name[idx] == 'i' || name[idx] == 'o' || name[idx] == 'u' || name[idx] == 'A' || name[idx] == 'E' || name[idx] == 'I' || name[idx] == 'O' || name[idx] == 'U')
        {
            total = total + 1;
        }
        else{
            total = total;
        }
    }
    cout << "Total Number of vowels in this string is: " << total << endl;
   
}
