#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
  int n=s.size();
  int m=t.size();
  if(n!=m) return false;
  vector<int> v(256,0);
  for(int i=0;i<n;i++){
      v[s[i]]++;
      v[t[i]]--;
  }
  for(auto ele:v) if(ele!=0) return false;
  return true;
}

int main(){
  
  return 0;
}