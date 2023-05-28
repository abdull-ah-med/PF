#include <iostream>
#include <cmath>
using namespace std;
float calculate(float examstartinmins, float studentarriveinmins);
main()
{
    int examstartinghour, examstartingmins, studentarrivinghours, studentarrivingmins;
    float examstartinmins, studentarriveinmins;
    cout << "Enter Exam Starting Hour: ";
    cin >> examstartinghour;
    cout << "Enter Exam Starting mins: ";
    cin >> examstartingmins;
    cout << "Enter Student's Arrival(hours): ";
    cin >> studentarrivinghours;
    cout << "Enter Student's Arrival(mins): ";
    cin >> studentarrivingmins;
    if (examstartinghour >= 0)
    {
        if (examstartinghour > 12)
        {
            examstartinmins = ((examstartinghour - 12) * 60) + examstartingmins;
        }
        else if (examstartinghour <= 12)
        {
            examstartinmins = (examstartinghour * 60) + examstartingmins;
        }
    }
    if (studentarrivinghours >= 0)
    {
        if (studentarrivinghours > 12)
        {
            studentarriveinmins = ((studentarrivinghours - 12) * 60) + studentarrivingmins;
        }
        else if (studentarrivinghours <= 12)
        {
            studentarriveinmins = (studentarrivinghours * 60) + studentarrivingmins;
        }
    }
    calculate(examstartinmins, studentarriveinmins);
}

float calculate(float examstartinmins, float studentarriveinmins)
{
    if (examstartinmins > studentarriveinmins)
    {
        float earlyarrival = examstartinmins - studentarriveinmins;
        if (earlyarrival < 60)
        {
            if (earlyarrival <= 30)
            {
                cout << "On Time." << endl;
                cout << earlyarrival << " mins before the start." << endl;
            }
            else if (earlyarrival > 30 && earlyarrival < 60)
            {
                cout << "Early.";
                cout << earlyarrival << " mins before the start." << endl;
            }
        }
        else if (earlyarrival >= 60)
        {
            int minstohours = earlyarrival / 60;
            double hours = minstohours % 10;
            double minutes = ((earlyarrival / 60.0) - hours) * 60.0;
            if (earlyarrival == 60)
            {
                cout << "Early" << endl;
                cout << hours << " hours before the start." << endl;
            }
            else if (earlyarrival > 60)
            {
                cout << "Early." << endl;
                cout << hours << ":" << minutes << " hours before the start." << endl;
            }
        }
    }
    if (examstartinmins < studentarriveinmins)
    {
        int latearrival = studentarriveinmins - examstartinmins;
        if (latearrival < 60)
        {
            if (latearrival <= 30)
            {
                cout << "Late" << endl;
                cout << latearrival << " mins after the start." << endl;
            }
            else if (latearrival > 30 && latearrival < 60)
            {
                cout << "Late" << endl;
                cout << latearrival << " mins after the start." << endl;
            }
        }
        else if (latearrival >= 60)
        {
            int minstohours = latearrival / 60.0;
            double hours = minstohours % 10;
            double minutes = ((latearrival / 60.0) - hours) * 60.0;
            if (latearrival == 60)
            {
                cout << "Late" << endl;
                cout << hours << " hours after the start." << endl;
            }

            else if (latearrival > 60)
            {
                cout << "Late" << endl;
                cout << hours << ":" << minutes << " hours after the start." << endl;
            }
        }
    }
}
