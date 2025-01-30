#include<bits/stdc++.h>
using namespace std;
void display(stack<int>& st){
    if(st.size()==0) return ;
    int temp=st.top();
    st.pop();
    display(st);
    cout<<temp<<" ";
    st.push(temp);
}
void pushBottom(stack<int>& st,int val){
    if(st.size()==0) {
        st.push(val) ;
        return;
    }
    int temp=st.top();
    st.pop();
    pushBottom(st,val);
    st.push(temp);
}
int main(){
  stack<int>st;
  for(int i=1;i<=5;i++){
    st.push(i);
  }
  pushBottom(st,6);
  display(st);
  cout<<endl<<st.size();
  return 0;
}