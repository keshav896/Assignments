#include<iostream>
using namespace std;
int main(){
    int array[]={99,43,32,54,56,87,59,13,30,31};
    int max=INT_MIN;
    int Smax=INT_MIN;
    int Tmax=INT_MIN;
    for(int i=0;i<10;i++){
        if(array[i]>max){
            Tmax=Smax;
            Smax=max;
            max=array[i];
        }else if(array[i]>Smax && array[i]<max){
            Tmax=Smax;
            Smax=array[i];
        }else if(array[i]>Tmax && array[i]<Smax && array[i]<max){
            Tmax=array[i];
        }
    }
    for(int i=0;i<10;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    cout<<"First Greatest element: "<<max<<endl;
    cout<<"Second Greatest element: "<<Smax<<endl;
    cout<<"Third Greatest element: "<<Tmax<<endl;
return 0;
}