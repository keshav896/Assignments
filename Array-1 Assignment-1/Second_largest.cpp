#include<iostream>
using namespace std;
int main(){
    int array[]={98,43,76,54,34,45,97,65};
    int largest=array[0];
    int second_largest=INT_MIN;
    
    for(int i=0;i<8;i++){
     if(array[i]>largest){
        second_largest=largest;
        largest=array[i];
     }else if (array[i]>second_largest && array[i]<largest){
        second_largest=array[i];
     }
    }
    cout<<"largest element: "<<largest<<endl;
    cout<<"Second largest element: "<<second_largest<<endl;
    
return 0;
}