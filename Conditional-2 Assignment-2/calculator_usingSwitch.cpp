#include<iostream>
using namespace std;
int main( ) {
int a,b;
char operation ;
cout<<"Enter a: ";
cin>>a;
cout<<"Enter b: ";
cin>>b;
cout<<"Enter operator: ";
cin>>operation;
switch (operation)
{
case '+' :
    cout<<a+b;
    break;
case '-' :
    cout<<a-b;
    break;
case '*' :
    cout<<a*b;
    break;
case '/' :
    cout<<a/b;
    break;

default:
    cout<<"Not Valid operator";
    break;
}
return 0;
}