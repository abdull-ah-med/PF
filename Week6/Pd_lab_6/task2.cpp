#include <iostream>
using namespace std;
float number, totalnumber, engmarks, mathmarks, biomarks, chemmarks, ssmarks, percentage;
string name, grade;
void input();
void calculatemarks();
main()
{
    input();
    calculatemarks();
    cout << name << endl;
    cout << totalnumber << endl;
    cout << percentage << "%" << endl;
    cout << grade << endl;
    
}
void input()
{
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter English marks: ";
    cin >> engmarks;
    cout << "Enter Mathematics marks: ";
    cin >> mathmarks;
    cout << "Enter Chemistry marks: ";
    cin >> chemmarks;
    cout << "Enter Biology: ";
    cin >> biomarks;
    cout << "Enter Social Science: ";
    cin >> ssmarks;
}
void calculatemarks()
{
    totalnumber = engmarks + mathmarks + chemmarks + biomarks + ssmarks;
    percentage = (totalnumber/500) * 100;
    if (percentage <= 100 && percentage > 89)
    {
        grade = "A+";
    }
    else if (percentage < 90 && percentage > 79)
    {
        grade = "A";
    }
    else if (percentage < 80 && percentage > 69)
    {
        grade = "B+";
    }
    else if (percentage < 70 && percentage > 59)
    {
        grade = "B";
    }
    else if (percentage < 60 && percentage > 49)
    {
        grade = "C";
    }
     else if (percentage < 50 && percentage > 39)
    {
        grade = "D";
    }
     else if (percentage < 40)
    {
        grade = "E";
    }
}
