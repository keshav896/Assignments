#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter your string: ";
    cin>>str;
    reverse(str.begin()+(str.length()+1)/2,str.end());
    cout<<str;
return 0;
}