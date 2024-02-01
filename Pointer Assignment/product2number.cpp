#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter value of X and Y: ";
    cin>>x>>y;
    int *p1=&x;
    int *p2=&y;
    int product = (*p1)*(*p2);
    cout<<"Product: "<<product;
return 0;
}