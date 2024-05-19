#include<iostream>
using namespace std;
int main(){
    string s="pallavi";
    int n =s.length();
    cout<<"String s: "<<s<<endl;
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-1-i;j++){
            if(s[j]>=s[j+1]){
             flag=false;
             swap(s[j],s[j+1]);
            }
           
        }
         if(flag==true)break;
    }
    cout<<"Sorted String: "<<s;
    return 0;
}