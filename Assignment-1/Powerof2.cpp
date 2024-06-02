#include<iostream>
using namespace std;
bool isPowerOfTwo(int a){
   if(a==1) return true;
   if(a%2==0){
    return isPowerOfTwo(a/2);
   }
  return false;
}
int main(){
int a;
cout<<"Enter a number: ";
cin>>a;
cout<<isPowerOfTwo(a);
return 0;
}