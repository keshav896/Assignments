#include <iostream >
using namespace std;
int main(){
    float pi=3.14;
    int radius;
    cout<<"Enter radius of circle: ";
    cin>>radius;
    float area = 2*pi*radius;
    float circumference = pi*radius*radius;
    if(area>circumference) cout<<"area is greater than circumference";
    else cout<<"circumference is greater than area";
    return 0;
}