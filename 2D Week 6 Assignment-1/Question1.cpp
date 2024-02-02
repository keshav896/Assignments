#include<iostream>
using namespace std;
int main(){
    int m=5,n=5;
    int array[m][n];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
         array[i][j]=10;   
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
         cout<<array[i][j]<<" ";   
        }
    }

return 0;
}