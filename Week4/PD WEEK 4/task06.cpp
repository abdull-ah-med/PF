#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void printA();
void printW();
void printI();
void printS();
main(){
system ("cls");
printA();
cout << endl;
printW();
cout << endl;
printI();
cout << endl;
printA();
cout << endl;
printS();
cout << endl;
}
void printA()
{
 cout << "  **** " << endl;
 cout << " *    *" << endl;
 cout << " ******" << endl;
 cout << " *    *" << endl;
 cout << " *    *" << endl;
}
void printW()
{
 cout << " **      ** " << endl;
 cout << " **  **  ** " << endl;
 cout << " **  **  ** " << endl;
 cout << " **  **  **" << endl;
 cout << "   **  **" << endl;
}
void printI()
{
 cout << " ******" << endl;
 cout << "   **  " << endl;
 cout << "   **  " << endl;
 cout << "   **  " << endl;
 cout << " ******" << endl;
}
void printS()
{
 cout << "    *" << endl;
 cout << "  *   *" << endl;
 cout << "    *  " << endl;
 cout << "  *   * " << endl;
 cout << "    *" << endl;
}    

