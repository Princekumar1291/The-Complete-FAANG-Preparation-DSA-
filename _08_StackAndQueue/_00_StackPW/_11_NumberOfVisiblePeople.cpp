//Problem Link: https://leetcode.com/problems/number-of-visible-people-in-a-queue/


#include<bits/stdc++.h>
using namespace std;

vector<int> canSeePersonsCount(vector<int>& heights) {
  int n=heights.size();
  vector<int> ans;
  for(int i=0;i<n;i++){
    int maxi=-1;
    int c=0;
    for(int j=i+1;j<n;j++){
      if(maxi<=heights[i] && maxi<=heights[j]) c++;
      maxi=max(maxi,heights[j]);
    }
    ans.push_back(c);
  }
  return ans;
}


vector<int> canSeePersonsCount(vector<int>& heights) {
  //next greater element concept
  int n=heights.size();
  stack<int> st;
  vector<int> ans(n);
  ans[n-1]=0;
  st.push(heights[n-1]);
  for(int i=n-2;i>=0;i--){
      int c=0;
      while(!st.empty() && st.top()<heights[i]){
          st.pop();
          c++;
      }
      if(st.empty()){
          ans[i]=c;
      }
      else{
          ans[i]=c+1;
      }
      st.push(heights[i]);
  }
  return ans;
}

int main(){
  
  return 0;
}