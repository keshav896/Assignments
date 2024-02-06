#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter value of x: ";
    cin>>x;
    int array[]={12,45,23,54,65,78,54,34,76,45};
    int count=0;
    for(int i=0;i<=9;i++){
      if(x<array[i]) count ++;
    }
    cout<<"Number of element greater than x: "<<count;
return 0;
}