#include<iostream>
using namespace std;
int main(){
    int array[4][4]={{1,2,-3,4},{0,0,-4,2},{1,-1,2,3},{-4,-5,-7,0}};
    int x1,y1,x2,y2;
    cout<<"Enter value of (x1,y1): ";
    cin>>x1>>y1;
    cout<<"Enter value of (x2,y2): ";
    cin>>x2>>y2;
    int sum=0;
    for(int i=x1;i<=x2;i++){
        for(int j=y1;j<=y2;j++){
            sum+=array[i][j];
        }
    }
    cout<<sum;
return 0;
}