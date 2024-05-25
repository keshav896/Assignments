#include <iostream>
using namespace std;
int main()
{
    int array[] = {1,2,3,3,4,4,4,5};
    int n = sizeof(array) / sizeof(array[0]);
    int loidx = 0;
    int hidx = n - 1;
    int x = 3;
    int mid;
    int flag = false;
    while (loidx <= hidx)
    {
        mid = loidx + (hidx - loidx) / 2;
        if (array[mid] == x)
        {
            if (array[mid + 1] != x)
            {   
                flag = true;
               cout<<mid;
               break;
            }
            else
            {
               loidx=mid+1;
            }
        }
        else if (array[mid] > x)
        {
            hidx = mid - 1;
        }
        else
        {
            loidx = mid + 1;
        }
    }
    if (flag ==false){
       cout<<-1;
    }
    return 0;
}
