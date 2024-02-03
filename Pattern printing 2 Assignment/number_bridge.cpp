#include<iostream>
using namespace std;
int main(){ 
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        if(i>n) cout<< 2*n-i;
        else cout<<i;
    }
    cout<<endl;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n-i;j++){
            cout<<j;
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<" ";
        }
        for(int j=n-i;j>0;j--){
            cout<<j;
        }
     cout<<endl;
    }  
return 0;
}