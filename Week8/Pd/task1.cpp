#include <iostream>
using namespace std;
main()
{
    string fruit[4] = {"peach", "apple", "guava", "watermelon"};
    float price[4] = {60, 70, 40, 30};
    int weight, finalprice;
    string requiredfruit;
    cout << "Enter Fruit: ";
    cin >> requiredfruit;
    cout << "Enter Weight: ";
    cin >> weight;
    for (int idx = 0; idx < 5; idx++)
    {
        if (requiredfruit == fruit[idx])
        {
            finalprice = price[idx] * weight;
            break;
        }
        else{
            continue;
        }
    }
    cout << "Final Price: " << finalprice << endl;
}