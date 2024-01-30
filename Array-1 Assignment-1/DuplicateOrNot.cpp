#include<iostream>
using namespace std;
int main(){
    int array[]={12,65,34,76,34,23,67,54};
    bool flag=false;
    for(int i=0;i<=7;i++){
        for(int j=i+1;j<=6;j++){
               if(array[i]==array[j]){
                cout<<i<<" "<<j<<endl;
                flag=true;
                break;
            }
        }
    }
    if(flag=true) cout<<"Duplicate element found";
    else cout<<"No Duplicaate element found";
return 0;
}