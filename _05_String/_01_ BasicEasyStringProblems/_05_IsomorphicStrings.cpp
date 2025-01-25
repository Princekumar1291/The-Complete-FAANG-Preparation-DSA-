//Problem Link: https://leetcode.com/problems/isomorphic-strings/description/


#include<bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t) {
  int n=s.size();
  int m=t.size();
  if(n!=m) return false;

  vector<int> v(256,0);
  for(int i=0;i<n;i++){
    if(v[s[i]]==0){
      v[s[i]]=t[i];
    }
    else{
      if(v[s[i]]!=t[i]) return false;
    }
  }
  v =vector<int>(256, 0);
  for(int i=0;i<n;i++){
    if(v[t[i]]==0){
      v[t[i]]=s[i];
    }
    else{
      if(v[t[i]]!=s[i]) return false;
    }
  }
  return true;
}



bool isIsomorphic(string s, string t) {
  unordered_map<char,char> mp;
  int n=s.size();
  for(int i=0;i<n;i++){
      if(mp.find(s[i])!=mp.end()){
          if(mp[s[i]]!=t[i]) return false;
      }
      mp[s[i]]=t[i];
  }
  mp.clear();
  for(int i=0;i<n;i++){
      if(mp.find(t[i])!=mp.end()){
          if(mp[t[i]]!=s[i]) return false;
      }
      mp[t[i]]=s[i];
  }
  return true;
}


int main(){
  
  return 0;
}