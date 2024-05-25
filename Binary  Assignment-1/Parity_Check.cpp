#include <iostream>
using namespace std;
int main()
{
    int array[] = {0,0,0,0,1,1,1,1,1};
    int n = sizeof(array) / sizeof(array[0]);
    int loidx = 0;
    int hidx = n - 1;
    int mid;
    int count=0;
    while (loidx <= hidx)
    {
        mid = loidx + (hidx - loidx) / 2;
        if (array[mid] == 1 )
        {
            if (array[mid - 1] !=1 )
            {   
                count=n-mid;
                cout<<count;
                break;
            }
            else
            {
               hidx=mid-1;
            }
        }
        else 
        {
            loidx = mid + 1;
        }
    }
    
    return 0;
}
