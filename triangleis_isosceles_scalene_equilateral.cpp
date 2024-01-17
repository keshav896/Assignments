#include <iostream>
using namespace std;
int main(){
    int a,b,c;
cin>>a>>b>>c;
if(a==b && b==c) cout<<"Equilateral triangle";
else if((a==b) || b==c || c==a) cout<<"Isosceles triangle";
else cout<<"Scalene";
    return 0;
}