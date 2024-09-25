//Problem Link: https://www.geeksforgeeks.org/problems/min-number-of-flips3210/1?page=2&difficulty%255B%255D=0&category%255B%255D=Strings&sortBy=submissions

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


int minFlips (string S){
    int n=S.size();
    int ans1=0;
    int ans2=0;
    int c1=0;
    int c2=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(S[i]=='0') c1++;
        }
        else{
            if(S[i]=='1') c2++;
        }
    }
    ans1=c1+c2;
    c1=0,c2=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(S[i]=='1') c1++;
        }
        else{
            if(S[i]=='0') c2++;
        }
    }
    ans2=c1+c2;
    return min(ans1,ans2);
}


int main(){
  
  return 0;
}