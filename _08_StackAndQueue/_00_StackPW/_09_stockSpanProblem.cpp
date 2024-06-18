// Problem Link: https://www.geeksforgeeks.org/problems/stock-span-problem-1587115621/1

#include<bits/stdc++.h>
using namespace std;

vector <int> calculateSpan(int price[], int n){
  vector<int> ans(n);
  stack<int> st;
  ans[0]=-1;
  st.push(0);
  for(int i=1;i<n;i++){
    while(!st.empty() && price[st.top()]<=price[i]){
        st.pop();
    }
    if(st.empty()){
        ans[i]=-1;
    }
    else{
        ans[i]=st.top();
    }
    st.push(i);
  }
  for(int i=0;i<n;i++){
      ans[i]=i-ans[i];
  }
  return ans;
}

int main(){
  
  return 0;
}