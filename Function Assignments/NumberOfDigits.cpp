#include<iostream>
using namespace std;
int count_digits(int x){
    int digit_count =0;
    while(x>0){
    x/=10;
    digit_count++;
    }
    return digit_count;  
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int square = count_digits(num)*count_digits(num);
    cout<<square;
return 0;
}