#include<iostream>
using namespace std;
int main(){
    int array1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int array2[3][3]={{4,5,8},{0,0,8},{1,2,0}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            array1[i][j]+=array2[i][j];
        cout<<array1[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}