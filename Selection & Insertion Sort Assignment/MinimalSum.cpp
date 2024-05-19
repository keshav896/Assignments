#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int array[]={0,4,3,5,7,2,8,1,9,6};
    int n=10;
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1){
            if(array[j]<array[j-1])swap(array[j],array[j-1]);
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    int number1=0;
    for(int i=0;i<n;i++){
        number1*=10;
        number1+=array[i];
    }
    cout<<number1<<endl;
    swap(array[n-1],array[n-2]);
    int number2=0;
    for(int i=0;i<n;i++){
        number2*=10;
        number2+=array[i];
    }
    cout<<number2<<endl;
    int minimal_sum=number1+number2;
    cout<<"Minimal Sum: "<<minimal_sum;
    return 0;
}