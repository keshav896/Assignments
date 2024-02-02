#include<iostream>
using namespace std;
int main(){
    int n=5;
    int array[n][n]={{1,2,3,4,5},{3,4,5,6,7},{7,6,5,4,3},{8,7,6,5,4},{1,2,37,8,0}};
    int middle_element = (n+1)/2; 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
      if(i==(middle_element-1) || j==(middle_element-1)) cout<<array[i][j]<<" ";
      else cout<<" ";
    }
    cout<<endl;
    }

}