#include<iostream>
using namespace std;
int main(){
    int array[]={12,45,65,87,45,34,65,87,43,76,45};
    int Odd_sum=0;
    int Even_sum=0;
    for(int i=0;i<=10;i++){
        if(i%2==0) Even_sum+=array[i];
        else Odd_sum+=array[i];
    }
    int difference=Even_sum-Odd_sum;
    cout<<"Even indices sum: "<<Even_sum<<endl;
    cout<<"Odd indices sum: "<<Odd_sum<<endl;
    cout<<"Difference: "<<difference<<endl;

return 0;
}