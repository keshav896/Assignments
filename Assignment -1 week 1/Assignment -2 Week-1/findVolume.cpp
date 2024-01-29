#include<iostream>
using namespace std;
int main(){
    int height, radius;
    cout<<"Enter height and radius: ";
    cin>>height>>radius;
    float volume = 3.14*radius*radius*height;
    cout<<"Volume: "<<volume;
return 0;
}