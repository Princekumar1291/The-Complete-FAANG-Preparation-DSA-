#include<bits/stdc++.h>
using namespace std;

string merge (string s1, string s2){
  int i=0;
  int j=0;
  string ans="";
  int m=s1.size();
  int n=s2.size();
  bool check=true;
  
  while(i<m && j<n){
    if(check){
      ans+=s1[i];
      check=!check;
      i++;
    }
    else{
      ans+=s2[j];
      j++;
      check=!check;
    }
  }
  while(i<m) ans+=s1[i++];
  while(j<n) ans+=s2[j++];
  
  return ans;
}

int main(){
  
  return 0;
}