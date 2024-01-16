#include<iostream>
using namespace std;
void  area( int r){
    float result= 3.14*r*r;
    cout<<result<<endl;
}
int main(){
    int radius;
    cout<<"Enter radius of circle: ";
    cin>>radius;
    area(radius);
return 0;
}