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

int main(){
  
  return 0;
}