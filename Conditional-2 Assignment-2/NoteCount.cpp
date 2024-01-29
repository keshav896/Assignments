#include <iostream>

using namespace std;

int main()
{
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int count_500, count_100, count_50, count_20, count_10, count_5;
    switch (amount >= 500)
    {
    case 1:
        count_500 = amount / 500;
        amount -= count_500 * 500;
    }
    switch (amount >= 100)
    {
    case 1:
        count_100 = amount / 100;
        amount -= count_100 * 100;
    }
   
    switch (amount >= 50)
    {
    case 1:
        count_50 = amount / 50;
        amount -= count_50 * 50;
    }
    switch (amount >= 10)
    {
    case 1:
        count_10 = amount / 10;
        amount -= count_10 * 10;
    }
    switch (amount >= 5)
    {
    case 1:
        count_5 = amount / 5;
        amount -= count_5 * 5;
    }
     cout<<"count_500: "<<count_500<<" count_100: "<<count_100<<" count_50: "<<count_50<<" count_10: "<<count_10<<" count_5: "<<count_5;
    return 0;
}
