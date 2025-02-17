//Problem Link: https://www.geeksforgeeks.org/problems/fruit-into-baskets-1663137462/1

#include<bits/stdc++.h>
using namespace std;


//O(2n);
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



//O(n)
int totalElements(vector<int> &arr) {
    int n=arr.size();
    unordered_map<int,int> mp;
    int i=0,j=0;
    int ans=0;
    while(j<n){
        mp[arr[j]]++;
        while(mp.size()>2){
            mp[arr[i]]--;
            if(mp[arr[i]]==0) mp.erase(arr[i]);
            i++;
        }
        ans=max(ans,j-i+1);
        j++;
    }
    return ans;
}