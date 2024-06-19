#include<bits/stdc++.h>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
  vector<int> v;
  int n=nums.size()-k+1;
  for(int i=0;i<n;i++){
    int max=INT_MIN;
    for(int j=i;j<k+i;j++){
        if(max<nums[j]) max=nums[j];
    }
    v.push_back(max);
  }
  return v;
}

int main(){
  
  return 0;
}