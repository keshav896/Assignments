#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int original =n;
    int reverse=0;
    while(n>0){
        reverse*=10;
        int last_digit=n%10;
        reverse+=last_digit;
        n/=10;
    }
    cout<<original+reverse;
return 0;
}