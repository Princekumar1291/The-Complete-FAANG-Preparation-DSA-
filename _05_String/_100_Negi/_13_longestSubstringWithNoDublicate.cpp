//Problem Link: https://www.geeksforgeeks.org/problems/longest-distinct-characters-in-string5848/1?page=1&difficulty%255B%255D=0&category%255B%255D=Strings&sortBy=submissions

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

int longestSubstrDistinctChars(string s) {
  int ans = 0;
  int low = 0;
  unordered_map<char, int> mp;
  for (int i = 0; i < s.size(); i++) {
      if (mp.find(s[i]) != mp.end() && mp[s[i]] >= low) {
          low = mp[s[i]] + 1;  
      }
      mp[s[i]] = i;
      ans = max(ans, i - low + 1);
  }
  
  return ans;
}

int main(){
  
  return 0;
}