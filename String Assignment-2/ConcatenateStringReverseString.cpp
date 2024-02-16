#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string s1;
cout<<"Enter your string: ";
cin>>s1;
string reverse_s1=s1;
reverse(reverse_s1.begin(),reverse_s1.end());
s1+=reverse_s1;
cout<<s1;
return 0;
}