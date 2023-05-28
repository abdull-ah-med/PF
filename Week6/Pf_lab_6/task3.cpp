#include <iostream>
using namespace std;
string checktitle(float age, char gender);
main()
{
    float age;
    char gender;
    string title;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter gender: ";
    cin >> gender;
    title = checktitle(age, gender);
    cout << "Your title will be: " << title << endl;
}
string checktitle(float age, char gender)
{
    string title;
    if (age > 0 && age < 16)
    {
        if (gender == 'm')
        {
            title = "Master";
        }
        else if (gender == 'f')
        {
            title = "Miss";
        }
        else
        {
            title = "try again";
        }
    }
    else if (age >= 16)
    {
        if (gender == 'm')
        {
            title = "Mr";
        }
        else if (gender == 'f')
        {
            title = "Ms";
        }
        else
        {
            title = "try again";
        }
    }
    else
    {
        title = "try again";
    }
    return title;
}