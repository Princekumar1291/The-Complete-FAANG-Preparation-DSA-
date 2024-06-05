#include<bits/stdc++.h>
using namespace std;

int minFlips (string s){
  int ans1=0;
  int ans2=0;
  
  int n=s.size();
  for(int i=0;i<n;i++){
      if(i%2==0){
          if(s[i]=='0') ans1++;
          if(s[i]=='1') ans2++;
      }
      else{
          if(s[i]=='1') ans1++;
          if(s[i]=='0') ans2++;
      }
  }
  return  min(ans1,ans2);
}

int main(){
  
  return 0;
}