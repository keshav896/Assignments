#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter your string: ";
    cin>>str;
    bool flag = false;
    for(int i=0;i<str.length();i++){
       if(str[i]==str[str.length()-1-i]){
          flag=true;
       }
       else{
           flag=false;
       }
    }
    if(flag==true){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
return 0;
}