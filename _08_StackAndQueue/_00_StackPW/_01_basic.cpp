#include<bits/stdc++.h>
using namespace std;

void displayRec(stack<int> st){
  if(st.empty()) return ;
  int t=st.top();
  st.pop();
  displayRec(st);
  cout<<t<<" ";
}

void displayRecRev(stack<int> st){
  if(st.empty()) return ;
  int t=st.top();
  st.pop();
  cout<<t<<" ";
  displayRec(st);
  st.push(t);
}

void displayRev(stack<int> st){
  while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
  }
}

void reverseStack(stack<int>& st){
  stack<int> s;
  stack<int> t;
  while(!st.empty()){
    s.push(st.top());
    st.pop();
  }
  while(!s.empty()){
    t.push(s.top());
    s.pop();
  }
  while(!t.empty()){
    st.push(t.top());
    t.pop();
  }
}

void pushAtAnyIndex(stack<int>& st,int index,int ele){
  stack<int> temp;
  while(!st.empty()){
    temp.push(st.top());
    st.pop();
  }
  int c=0;
  while(!temp.empty()){
    if(c==index) st.push(ele);
    else{
      st.push(temp.top());
      temp.pop();
    }
    c++;
  }
  if(c==index) st.push(ele);
}

void pushAtBottom(stack<int>& st,int ele){
  stack<int> temp;
  while(!st.empty()){
    temp.push(st.top());
    st.pop();
  }
  st.push(ele);
  while(!temp.empty()){
    st.push(temp.top());
    temp.pop();
  }
}

void reverseStackRec(stack<int>& st){
  if(st.size()==0) return;
  int t=st.top();
  st.pop();
  reverseStackRec(st);
  pushAtBottom(st,t);
}

int main(){
   stack<int> st;
   st.push(10);
   st.push(20);
   st.push(30);
   st.push(40);
   st.push(50);
   st.push(60);
  //  cout<<st.size()<<endl;
  //  st.pop();
  //  cout<<st.size()<<endl;
  //  displayRec(st);cout<<endl;
  //  displayRecRev(st);cout<<endl;
  //  displayRev(st);cout<<endl;


  // stack<int> temp;
  // while(!st.empty()){
  //   cout<<st.top()<<" ";
  //   temp.push(st.top());
  //   st.pop();
  // }cout<<endl;
  // while(!temp.empty()){
  //   st.push(temp.top());
  //   temp.pop();
  // }
  // cout<<st.size()<<endl;

  // displayRec(st);cout<<endl;
  // reverseStack(st);
  // displayRec(st);cout<<endl;

  
  // pushAtBottom(st,5);
  // displayRec(st);
  
  // pushAtAnyIndex(st,5,5);
  // displayRec(st);
  
  displayRec(st);cout<<endl;
  reverseStackRec(st);
  displayRec(st);cout<<endl;

   
  return 0;
}