#include<iostream>
#include<stack>
using namespace std;
void removeKthElement(stack<int> &s,int k){
    stack<int> temp;
    int x;
    while(s.size()>=k){
        int x=s.top();
        temp.push(x);
        s.pop(); 
    }
    s.pop();
    while(temp.size()>0){
        x=temp.top();
        s.push(x);
        temp.pop();
    }
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    removeKthElement(st,4);
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
return 0;
}