//Problem Link: https://www.geeksforgeeks.org/problems/fruit-into-baskets-1663137462/1

#include<bits/stdc++.h>
using namespace std;

int totalFruits(int n, vector<int> &f) {
  int i=0,j=0,ans=0;
  unordered_map<int,int> mp;
  while(j<n){
      mp[f[j]]++;
      if(mp.size()<=2){
          ans=max(ans,j-i+1);
      }
      else{
          while(mp.size()>2){
              mp[f[i]]--;
              if(mp[f[i]]==0) mp.erase(f[i]);
              i++;
          }
      }
      j++;
  }
  return ans;
}


int main(){
  
  return 0;
}