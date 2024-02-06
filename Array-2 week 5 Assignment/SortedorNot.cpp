#include <iostream>
using namespace std;
int main()
{
    bool flag = false;
    int array[] = { 23,34, 45, 54, 58, 65, 73, 87};
    for (int i = 0; i <= 6; i++)
    {
        if (array[i] > array[i + 1])
        {
            flag = true;
            break;
        }
    }
    if (flag == false)
    {
        cout << "Sorted array";
    }
    else
    {
        cout << "Not sorted array";
    }
    return 0;
}