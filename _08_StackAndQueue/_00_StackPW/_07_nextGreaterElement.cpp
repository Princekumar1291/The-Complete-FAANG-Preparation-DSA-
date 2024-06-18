#include<bits/stdc++.h>
using namespace std;

vector<long long> nextLargerElement(vector<long long> arr, int n){
  // Your code here
  stack<long long> st;
  vector<long long> ans(n);
  st.push(arr[n-1]);
  ans[n-1]=-1;
  for(int i=n-2;i>=0;i--){
      while(!st.empty() && st.top()<=arr[i]){
          st.pop();
      }
      if(st.empty()){
          ans[i]=-1;
      }
      else{
          ans[i]=st.top();
      }
      st.push(arr[i]);
  }
  return ans;
}


int main(){
  
  return 0;
}