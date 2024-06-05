#include<bits/stdc++.h>
using namespace std;

int longestSubstrDistinctChars (string s){
  int ans=0;
  int n=s.size();
  
  for(int i=0;i<n;i++){
    int hash[255]={0};
    int c=0;
    for(int j=i;j<n;j++){
      if(hash[s[j]]>=1){
        ans=max(ans,c);
        break;
      }
      else hash[s[j]]++;
      c++;
    }
    ans=max(ans,c);
  }
  return ans;
}

int lengthOfLongestSubstringDistinctChars(string s) {
  int n=s.size();
  int ans=0;
  unordered_map<char,int> mp;
  int left=0;
  int right=0;
  
  while(right<n){
    if(mp.size()>0 && mp.find(s[right])!=mp.end() && mp[s[right]]>=left){
        ans=max(ans,right-left);
        left=mp[s[right]]+1;
    }
    mp[s[right]]=right;
    right++;
  }
  ans=max(ans,right-left);
  return ans;
}

int main(){
  
  return 0;
}