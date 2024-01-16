
#include<iostream>
using namespace std;
 void square( int a){
    int result = a*a;
    cout<<"Square of "<<a<<" is "<<result<<endl;  
}
int main(){
    int n;
    cout<<"enter value of n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        square(i);
    }

return 0;
}