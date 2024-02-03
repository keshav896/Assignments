#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--){
            cout<<" ";
        }
        cout<<i;
       if(i!=1){
         for(int j=1;j<=2*(i-1)-1;j++){
            cout<<" ";
        }
        cout<<i;
       }
        cout<<endl;
    }
return 0;
}