#include <iostream>
using namespace std;
int main()
{
    int array[11]={1,2,3,4,5,6,7,8,9,10,10};
    int n = sizeof(array) / sizeof(array[0]);
    int loidx =0;
    int hidx = n-1;
    int mid;
    while (loidx <= hidx)
    {
        mid = loidx + (hidx - loidx) / 2;
        if(array[mid]==mid){
            if(array[mid-1]==mid){
                cout<<mid;
                break;
            }else{
                hidx=mid-1;
            }
        }else{
            loidx=mid+1;
        }
    }
    
    return 0;
}
