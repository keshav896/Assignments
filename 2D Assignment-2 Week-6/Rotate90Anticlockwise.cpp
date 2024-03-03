#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter value of n and m: ";
    cin>>n>>m;
    int matrix[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"\nOutput Matrix"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\nTranspose Matrix"<<endl;
    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
         int temp=matrix[i][j];
         matrix[i][j]=matrix[j][i];
         matrix[j][i]=temp;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\nRotated  Matrix"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
         int temp=matrix[i][j];
         matrix[i][j]=matrix[n-1-i][j];
         matrix[n-1-i][j]=temp;
        }

    }
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}