#include<iostream>
using namespace std;
int main(){
    int n=3;
    int array[n][n]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i==j) ||(i+j==n-1))cout<<array[i][j];
            else cout<<" ";
        }
        cout<<endl;
    }
return 0;
}