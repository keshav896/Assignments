#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string s1;
cout<<"Enter your string: ";
cin>>s1;
int n =stoi(s1);
int max=0;
int second_max=0;
while(n>0){
    int last_digit = n%10;
    if(last_digit>max){
        second_max=max;
        max=last_digit;
    }
    else if(last_digit>second_max && last_digit<max){
        second_max=last_digit;
    }
    n/=10;
}
cout<<second_max;
return 0;
}