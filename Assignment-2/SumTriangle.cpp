/*
Given an array of integers, print a sum triangle using recursion from it such that the first level has
all array elements. After that, at each level the number of elements is one less than the previous
level and elements at the level will be the sum of consecutive two elements in the previous level.
So, if sample input is [5, 4, 3, 2, 1], sample output will be:
[5, 4, 3, 2, 1]
[9, 7, 5, 3]
[16, 12, 8]
[28, 20]
[48]
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void SumTriangle(vector<int> &array, int n){
    if(n==0) return ;
    vector<int> temp(n-1);
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
        if(i!=0){
            temp[i-1]=array[i-1]+array[i];
        }
    }
    cout<<endl;
    SumTriangle(temp, n-1);
}
int main(){
   vector<int> v={5,4,3,2,1};
    SumTriangle(v,5);
    return 0;
}