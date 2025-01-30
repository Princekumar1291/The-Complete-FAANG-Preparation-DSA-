//Problem Link: https://leetcode.com/problems/trapping-rain-water/submissions/1300848482/


#include<bits/stdc++.h>
using namespace std;

int trap(vector<int>& height) {
    int n=height.size();
    int ans=0;
    vector<int> next(n);
    vector<int> prev(n);
    prev[0]=height[0];
    next[n-1]=height[n-1];
    for(int i=1;i<n;i++){
        prev[i]=max(prev[i-1],height[i]);
    }
    for(int i=n-2;i>=0;i--){
        next[i]=max(next[i+1],height[i]);
    }
    for(int i=0;i<n;i++){
        ans+=min(prev[i],next[i])-height[i];
    }
    return ans;
}


int main(){
  
  return 0;
}