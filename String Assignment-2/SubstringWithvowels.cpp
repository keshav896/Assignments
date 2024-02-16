#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1;
    cout<<"Enter your string: ";
    cin>>s1;
    int count=0;
    int answer=0;
    for(int i=0;i<s1.length();i++){
        if(s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u' || s1[i]=='A' || s1[i]=='E' || s1[i]=='I' || s1[i]=='O' || s1[i]=='U'){
           count++;
        }else{
            answer+=count*(count+1)/2;
            count=0;
        }
    }
    cout<<"Total answer: "<<answer+count*(count+1)/2;
return 0;
}