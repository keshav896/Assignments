#include<iostream>
using namespace std;
int OddSum(int a,int b){
    if(a>b) return 0;
    if(a%2==0) return OddSum(a+1,b);
    return a+OddSum(a+2,b);

}
int main(){
int a,b;
cin>>a>>b;
cout<<OddSum(a,b);
return 0;
}