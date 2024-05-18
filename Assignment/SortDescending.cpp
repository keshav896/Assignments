#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v={23,45,2,65,67,34};
    for(int i=0;i<v.size()-1;i++){
        for(int j=0;j<v.size()-1-i;j++){
            if(v[j]<v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}