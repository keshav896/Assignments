#include <iostream>
using namespace std;
int main()
{
 
    int loidx = 0;
    int x =45;
    int hidx =x;
    int mid;
    bool flag=false;
    while (loidx <= hidx)
    {   mid=loidx+(hidx-loidx)/2;
        if (mid*mid == x)
        { cout<<"it is a perfect Square -> "<<mid;
            flag=true;
          break;
        }
        else if (mid*mid > x)
        {
            hidx = mid - 1;
        }
        else
        {
            loidx = mid + 1;
        }
    }
    if(flag==false) cout<<"Not a Perfect square";
    
    return 0;
}
