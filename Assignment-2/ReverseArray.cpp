#include<iostream>
using namespace std;
void Reverse(int array[], int currentIndex, int n){
if(currentIndex==n) return;
 Reverse( array, currentIndex+1,n );
 cout<<array[currentIndex]<<" ";
}
int main(){
    int array[]={43,45,32,54,76,23,87};
    Reverse( array, 0,7);
return 0;
}