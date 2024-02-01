#include<iostream>
using namespace std;
int main(){
    int a=15, b=20;
    int *ptr=&a;
    int *ptr2=&b;
    *ptr=*ptr2;
    cout<<*ptr<<" "<<*ptr2;
return 0;
}
// a get value of b