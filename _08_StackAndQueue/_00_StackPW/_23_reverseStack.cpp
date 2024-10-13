#include<bits/stdc++.h>
using namespace std;
void insertEle(stack<int>& st,int ele){
    if(st.size()==0) {
        st.push(ele);
        return;
    }
    int topEle=st.top();st.pop();
    insertEle(st,ele);
    st.push(topEle);
}
void Reverse(stack<int> &st){
    if(st.size()==0) return;
    int topEle=st.top();
    st.pop();
    Reverse(st);
    insertEle(st,topEle);
}
int main(){
  
  return 0;
}