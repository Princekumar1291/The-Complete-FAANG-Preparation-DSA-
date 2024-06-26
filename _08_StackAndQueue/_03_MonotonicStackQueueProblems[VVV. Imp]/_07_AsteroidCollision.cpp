//Problem Link: https://leetcode.com/problems/asteroid-collision/description/



#include<bits/stdc++.h>
using namespace std;

vector<int> asteroidCollision(vector<int>& ast) {
  int n=ast.size();
  stack<int> st;

  for(int i=0;i<n;i++){
      if(st.empty()) st.push(ast[i]);
      else if(st.top()<0) st.push(ast[i]);
      else if(ast[i]>0) st.push(ast[i]);
      else{
          int temp=abs(ast[i]);
          while(!st.empty() && st.top()<temp && st.top()>0) st.pop();
          if(!st.empty() && st.top()==temp) st.pop();
          else if(st.empty() || st.top()<0) st.push(ast[i]);
      }
  }

  vector<int> ans(st.size());
  for(int i=st.size()-1;i>=0;i--){
      ans[i]=st.top();
      st.pop();
  }
  return ans;
}


int main(){
  
  return 0;
}