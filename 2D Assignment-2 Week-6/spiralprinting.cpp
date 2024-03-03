#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter value of n & m: ";
    cin>>n>>m;
    int matrix[n][m];
    int count=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        matrix[i][j]=count;
        count++;
        }
    }
    cout<<"\nOutput matrix\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    int print=0;
    cout<<"\nSpiral Order: ";
    int minrow=0,maxrow=n-1,mincolumn=0,maxcolumn=m-1;
    while(minrow<=maxrow && mincolumn<=maxcolumn){
        //right
        for(int j=mincolumn;j<=maxcolumn;j++){
            cout<<matrix[minrow][j]<<" ";
            print++;
        }
        minrow++;
        if(print>=n*m) break;
        //down
        for(int i=minrow;i<=maxrow;i++){
            cout<<matrix[i][maxcolumn]<<" ";
            print++;
        }
        maxcolumn--;
        if(print>=n*m) break;
        //left
        for(int j=maxcolumn;j>=mincolumn;j--){
            cout<<matrix[maxrow][j]<<" ";
            print++;
        }
        maxrow--;
        if(print>=n*m) break;
        //up
        for(int i=maxrow;i>=minrow;i--){
            cout<<matrix[i][mincolumn]<<" ";
            print++;
        }
        mincolumn++;
    }
return 0;
}