#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter value of n & m: ";
    cin>>n>>m;
    int matrix[n][m];
    cout<<"Enter matrix value\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"\nwaveform: ";
    for(int j=0;j<m;j++){
        if(j%2==0){
            for(int i=n-1;i>=0;i--){
                cout<<matrix[i][j]<<" ";
            }
        }else{
            for(int i=0;i<n;i++){
                cout<<matrix[i][j]<<" ";
            }
        }
    }
return 0;
}