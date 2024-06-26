//Problem Link: https://leetcode.com/problems/next-greater-element-i/description/



#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
  int n=nums1.size();
  int m=nums2.size();
  unordered_map<int,int> mp;
  mp[nums2[m-1]]=-1;
  
  stack<int> st;
  st.push(nums2[m-1]);
  for(int i=m-2;i>=0;i--){
      if(st.empty()) mp[nums2[i]]=-1;
      else if(st.top()>nums2[i]) mp[nums2[i]]=st.top();
      else{
          while(!st.empty() && st.top()<=nums2[i]) st.pop();
          if(st.empty()) mp[nums2[i]]=-1;
          else if(st.top()>nums2[i]) mp[nums2[i]]=st.top();
      }
      st.push(nums2[i]);
  }
  // for(auto ele: mp) cout<<ele.first<<" "<<ele.second<<"   ";
  vector<int> ans;
  for(int i=0;i<n;i++){
      ans.push_back(mp[nums1[i]]);
  }
  return ans;
}


int main(){
  
  return 0;
}