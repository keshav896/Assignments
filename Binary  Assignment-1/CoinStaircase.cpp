#include <iostream>
using namespace std;
int main()
{   int n;
    cout<<"Enter number of Coins: ";
    cin>>n;
    int loidx =0;
    int hidx = n;
    int mid;
    bool flag=false;
    while (loidx <= hidx)
    {
        mid = loidx + (hidx - loidx) / 2;
        int Coin_Used=mid*(mid+1)/2;
        if (Coin_Used==n )
        {  flag=true;
           cout<<mid;
           break;
        }
        else if(Coin_Used>n)
        {
           hidx = mid -1;
        }else{
            loidx=mid+1;
        }
    }
    if(flag==false)cout<<hidx;
    return 0;
}
