#include<iostream>
using namespace std;
int main(){
    int array[3][4]={{1,3,5,7},{3,4,7,8},{1,4,12,3}};
    int sum1=0,sum2=0,sum3=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
           if(i==0)sum1+=array[i][j];
           else if(i==1)sum2+=array[i][j];
           else sum3+=array[i][j];
    }
    }
    if(sum1>sum2 && sum1>sum3) cout<<"The first row has maximum sum: "<<sum1;
    else if(sum2>sum1 && sum2>sum3) cout<<"The Second row has maximum sum: "<<sum2;
    else  cout<<"The Third row has maximum sum: "<<sum3; 
return 0;
}