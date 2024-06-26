//Problem Link: https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/description/


#include<bits/stdc++.h>
using namespace std;

vector<int> finalPrices(vector<int>& arr) {
  int n=arr.size();
  vector<int> ans(n);
  ans[n-1]=0;

  stack<int> st;
  st.push(arr[n-1]);

  for(int i=n-2;i>=0;i--){
      if(st.empty()) ans[i]=0;
      else if(st.top()<=arr[i]) ans[i]=st.top();
      else{
          while(!st.empty() && st.top()>arr[i]) st.pop();
          if(st.empty()) ans[i]=0;
          else ans[i]=st.top();
      }
      st.push(arr[i]);
  }
  for(int i=0;i<n;i++){
      arr[i]=arr[i]-ans[i];
  }
  return arr;
}


int main(){
  
  return 0;
}