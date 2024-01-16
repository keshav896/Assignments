#include<iostream>
using namespace std;
int  odd_number(int x,int y){
for(int i=x;i<=y;i++){
    if(i%2!=0) cout<<i<<" ";
}
return 1;
}
int main(){
    int a,b;
    cout<<"Enter values of a & b: ";
    cin>>a>>b;
    odd_number(a,b);
return 0;
}