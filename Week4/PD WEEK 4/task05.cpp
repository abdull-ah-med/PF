#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void printAbdullah();

main()
{
system ("cls");
int x = 30;
int y = 30;
printAbdullah();
}

void printAbdullah()
{
gotoxy(30,30),
cout << "   ***  ***  ***   *    * *      *     *    *  ***  *    *" << endl;
cout << "  *   * *  * *  *  *    * *      *     *    * *   * *    * " << endl;
cout << "  ***** ***  *   * *    * *      *     *    * ***** ******" << endl;
cout << "  *   * *  * *  *  *    * *      *     *    * *   * *    *" << endl;
cout << "  *   * ***  ***    ****  *****  *****  ****  *   * *    * " << endl;
}
void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
