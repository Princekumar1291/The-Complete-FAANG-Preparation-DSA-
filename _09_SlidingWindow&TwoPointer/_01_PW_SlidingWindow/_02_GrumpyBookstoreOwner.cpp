// Problem Link: https://leetcode.com/problems/grumpy-bookstore-owner/description/

#include<bits/stdc++.h>
using namespace std;

int maxSatisfied(vector<int>& c, vector<int>& g, int m) {
  int n=c.size();
  int maxLoss=0;
  int i=0;
  for(i=0;i<m;i++){
      if(g[i]==1) maxLoss+=c[i];
  }

  int indx=0;
  int t=0;
  int maxAns=maxLoss;
  for(int j=i;j<n;j++){
      if(g[t]==1) maxLoss-=c[t];
      t++;
      if(g[j]==1) maxLoss+=c[j];
      if(maxLoss>maxAns){
          maxAns=maxLoss;
          indx=j;
      }
  }

  int ansFinal=0;
  for(int i=0;i<n;i++) {
      if(g[i]==0) ansFinal+= c[i];
  }
  ansFinal+=maxAns;
  return ansFinal;
}


int main(){
  
  return 0;
}