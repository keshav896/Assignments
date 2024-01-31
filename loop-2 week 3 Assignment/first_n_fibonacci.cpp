#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int a=1,b=1;
    int sum=0;
    cout<<a<<" "<<b<<" ";
    for(int i=3;i<=n;i++){
    sum=a+b;
    a=b;
    b=sum;
    cout<<b<<" ";
    
    }
return 0;
}