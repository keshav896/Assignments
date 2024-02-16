#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;
int main(){
// string s;
// cout<<"Enter your string: ";
// getline(cin,s);
// string word =""; string maxword="";
// for(int i=0;i<s.size();i++){
//     if(s[i]== ' '){
//         maxword=max(maxword,word);
//         word="";
//     }else{
//         word+=s[i];
//     }
// }
//     maxword=max(maxword,word);
//     cout<<maxword;
 string s1;
cout<<"Enter your string:";
getline(cin,s1);
string word;
vector<string> s;
stringstream ss(s1);
while(ss>>word){
 s.push_back(word);
}
sort(s.begin(),s.end());
cout<<s[s.size()-1];
return 0;
}