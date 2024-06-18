// Problem Link: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/


#include<bits/stdc++.h>
using namespace std;

string removeDuplicates(string s) {
  stack<char> st;
  int n=s.size();
  for(int i=0;i<n;i++){
      if(st.empty() || st.top()!=s[i] ){
          st.push(s[i]);
      }
      else{
          st.pop();
      }
  }
  string ans="";
  while(!st.empty()){
      ans=st.top()+ans;
      st.pop();
  }
  return ans;
}

int main(){
  
  return 0;
}