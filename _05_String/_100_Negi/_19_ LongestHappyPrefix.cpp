#include<bits/stdc++.h>
using namespace std;

string longestPrefix(string s) {
    int n=s.size();
  string ans="";
  string prf="";
  string suf="";
  for(int i=0;i<n-1;i++){
      prf+=s[i];
      suf=s[n-i-1]+suf;
      if(prf==suf){
          ans=prf;
      }
  }
  return ans;
}

int lps(string s) {
  // Your code goes here
  int n=s.size();
  int ans=0;
  string prf="";
  string suf="";
  for(int i=0;i<n-1;i++){
      prf+=s[i];
      suf=s[n-i-1]+suf;
      if(prf==suf){
          ans=max(ans,(int)prf.size());
      }
  }
  return ans;
}

int main(){
  
  return 0;
}