//Problem Link: https://leetcode.com/problems/reducing-dishes/description/


#include<bits/stdc++.h>
using namespace std;

int maxSatisfaction(vector<int>& s) {
  sort(s.begin(),s.end());
  int n=s.size();
  vector<int> suff(n);
  suff[n-1]=s[n-1];
  for(int i=n-2;i>=0;i--){
      suff[i]=suff[i+1]+s[i];
  }

  int ind=-1;
  for(int i=0;i<n;i++){
      if(suff[i]>=0) {
          ind=i;
          break;
      }
  }
  if(ind==-1) return 0;
  int sum=0;
  for(int i=ind;i<n;i++){
      sum+=s[i]*(i-ind+1);
  }
  return sum;
}


int main(){
  
  return 0;
}