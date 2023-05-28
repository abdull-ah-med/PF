#include <iostream>
using namespace std;
string calculatepoint(int h, int x, int y);
main()
{
    int h, x, y;
    string location;
    cout << "Enter h: ";
    cin >> h;
    cout << "Enter 'x': ";
    cin >> x;
    cout << "Enter 'y': ";
    cin >> y;
    location = calculatepoint(h,x,y);
    cout << location << endl;
}
string calculatepoint(int h, int x, int y)
{
    string location;
    int maxX = h * 3;
    int maxY = h * 4;
    int minX = 0;
    int minY = 0;

    if (x == minX && y == minY)
    {
        location = "At Origin(0, 0).";
    }
    else if (x > maxX && y > maxY)
    {
        location = "Outside.";
    }
    else if (y > h && (x > 2*h || x < h))
    {
        location = "Outside.";
    }

    else if (y <= h && y >= minY)
    {
        if (y == h || y == minY)
        {
            location = "At Border.";
        }

        else if (y < h && y > minY)
        {
            if (x == minX || x == maxX)
            {
                location = "At Border.";
            }
            else if (x > minX && x < maxX)
            {
                location = "Inside.";
            }
        }
        else 
        {
            location = "Outside.";
        }
    }
    else if (y > h && y <= maxY)
    {
        if (x == h || x == 2*h || y == maxY)
        {
            location = "At Border.";
        }
        else if ((x > h && x < 2*h) && y < maxY)
        {
            location = "Inside.";
        }
        else
        {
            location = "Outside.";
        }
    }
    else{
        location = "Outside.";
    }
    return location;
}
