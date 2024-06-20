//follow fifo 


#include<bits/stdc++.h>
using namespace std;


void display(queue<int>& q){
  int n=q.size();
  while(n--){
    int temp=q.front();
    cout<<temp<<" ";
    q.pop();
    q.push(temp);
  }cout<<endl;
}

void revQueue(queue<int>& q){
  stack<int> st;
  while(!q.empty()){
    int temp=q.front();
    q.pop();
    st.push(temp);
  }
  while(!st.empty()){
    int temp=st.top();
    st.pop();
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

  cout<<"This is back: "<<q.back()<<endl;
  cout<<"This is front: "<<q.front()<<endl;
  q.pop();
  cout<<"This is back: "<<q.back()<<endl;
  cout<<"This is front: "<<q.front()<<endl;
  display(q);
  revQueue(q);  
  display(q);


  return 0;
}