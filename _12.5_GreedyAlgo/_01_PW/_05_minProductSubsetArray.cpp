#include<bits/stdc++.h>
using namespace std;
int helper(vector<int>& nums){
  
  int n=nums.size();
  int noOf0=0;
  int noOfN=0;
  int noOfP=0;
  int maxN=INT_MIN;
  int proP=1;
  int proN=1;
  int minP=INT_MAX;
  for(int i=0;i<n;i++){
    if(nums[i]==0) noOf0++;
    else if(nums[i]<0) {
      noOfN++;
      maxN=max(maxN,nums[i]);
      proN*=nums[i];
    }
    else {
      noOfP++;
      proP*=nums[i];
      minP=min(minP,nums[i]);
    }
  }
  if(noOfN==0){
    if(noOf0>0) return 0;
    else return minP;
  }
  else{
    if(noOfN%2==1) {
      return proN*proP;
    }
    else{
      return (proN/maxN)*proP;
    }
  }

}
int main(){
  vector<int> nums={ -1, -1, -2, 4, 3 };
  cout<<helper(nums);
  return 0;
}