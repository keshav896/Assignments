#include<iostream>
using namespace std;
int main(){
    int array[]={34,56,34,76,87,78,67,45,12};
    for(int i=0;i<=8;i++){
        cout<<array[i]<<"  ";
    }
    cout<<endl;
    for(int i=0;i<=8;i++){
        if(i%2==0)array[i]*=2;
        else array[i]+=10;
    }
    for(int i=0;i<=8;i++){
        cout<<array[i]<<"  ";
    }
return 0;
}