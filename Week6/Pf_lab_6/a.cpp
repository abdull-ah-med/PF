#include <iostream>
using namespace std;
main()
{
    int price;
    string brand;
    cout << "Enter Price: ";
    cin >> price;
    if (price <= 1500)
    {
        cout << "Buy the dress!" << endl;
    }
    else
    {
        cout << "Don't buy the dress!" << endl;
    }
}