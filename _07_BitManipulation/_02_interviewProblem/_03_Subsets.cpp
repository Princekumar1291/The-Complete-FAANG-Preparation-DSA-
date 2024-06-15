#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets(vector<int>& nums) {
  int n=nums.size();
  int sub=pow(2,n);
  vector<vector<int>> ans;
  for(int i=0;i<sub;i++){
      vector<int> v;
      for(int j=0;j<n;j++){
          if(i&(1<<j)) v.push_back(nums[j]);
      }
      ans.push_back(v);
  }
  return ans;
}

int main(){
  
  return 0;
}