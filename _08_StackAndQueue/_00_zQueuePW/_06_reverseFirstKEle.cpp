#include<bits/stdc++.h>
using namespace std;

void display(queue<int> q){
  while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
  }cout<<endl;
}

void reverseFirstKEle(queue<int>& q,int k){
  stack<int> st;
  for(int i=1;i<=k;i++){
    st.push(q.front());
    q.pop();
  }
  int t=q.size();
  for(int i=1;i<=k;i++){
    q.push(st.top());
    st.pop();
  }
  for(int i=1;i<=t;i++){
    int temp=q.front();
    q.pop();
    q.push(temp);
  }
}



int main(){
  queue<int> q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);

  display(q);
  reverseFirstKEle(q,2);
  display(q);

  return 0;
}