#include<iostream>
using namespace std;
string countAndSay(int n){
    if(n==1) return "1";
    string prev=countAndSay(n-1);
    string result="";
    int count=1;
    for(int i=1;i<prev.size();i++){
        if(prev[i-1]==prev[i]){
            count++;
        }else{
            result+= to_string(count) +prev[i-1];
            count =1;
        }
    }
    result += to_string(count) + prev.back();
    return result;
    }
int main(){
   cout<<countAndSay(4);
 return 0;
}