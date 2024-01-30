#include<iostream>
using namespace std;
int main(){
    int array[]={23,14,76,87,34,54,84,86};
    int minimum=array[0];
    for(int i=0;i<=6;i++){
     if(minimum>array[i+1]){
        minimum=array[i+1];
     }
    }
    cout<<minimum<<endl;
    cout<<"Smallest missing element: "<<minimum-1;
return 0;
}