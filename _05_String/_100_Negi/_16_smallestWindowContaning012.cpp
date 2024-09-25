//Problem Link: https://www.geeksforgeeks.org/problems/smallest-window-containing-0-1-and-2--170637/1

#include<bits/stdc++.h>
using namespace std;


int smallestSubstring(string S) {
  int n=S.size();
  int ans=INT_MAX;
  int low=0;
  unordered_map<char,int> mp;
  for(int i=0;i<n;i++){
      mp[S[i]]++;
      if(mp.find(S[low])!=mp.end() && mp[S[low]]>1){
          while(mp[S[low]]>1) {
              mp[S[low]]--;
              low++;
          }
      }
      if(mp.size()==3){
          ans=min(ans,i-low+1);
      }
  }
  return ans==INT_MAX ? -1 : ans;
}

int main(){
  
  return 0;
}