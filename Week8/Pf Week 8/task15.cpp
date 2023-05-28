#include <iostream>
using namespace std;
main(){
    int arraysize = 4;
    float need, total;
    cout << "Enter Total amount needed: ";
    cin >> need;
    float change[arraysize];
    for(int idx = 0; idx < arraysize; idx++)
    {
        cout << "Enter Change: ";
        cin >> change[idx];
    }
    total = (change[0]*0.25) + (change[1]*0.1) + (change[2]*0.05) + (change[3]*0.01);
    if (total >= need)
    {
        cout << "Enough Money." << endl;
    }
    else{
        cout << "Not Enough." << endl;
    }

}