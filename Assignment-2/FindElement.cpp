#include<iostream>
using namespace std;
 int ElementSearch(int array[],int n,int target,int currentIndx){
        if(array[currentIndx]==target) return currentIndx;
        if(currentIndx>=n) return -1;
        return ElementSearch(array,n,target,currentIndx+1);
    }
int main(){
    int array[]={12,34,56,34,54,34,23};
   cout<<ElementSearch(array,7,54,0);
return 0;
}