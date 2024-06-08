#include<bits/stdc++.h>
using namespace std;


bool isPrime(int n){
  if(n==1) return false;
  for(int i=2;i<=sqrt(n);i++){
    if(n%i==0) return false;
  }
  return true;
}
int ans=0;
int diagonalPrime(vector<vector<int>>& nums) {
  int n=nums.size();
  for(int i=0;i<n;i++){
    if(isPrime(nums[i][i])){
      ans=max(ans,nums[i][i]);
    }
    if(isPrime(nums[i][n-i-1])){
      ans=max(ans,nums[i][n-i-1]);
    }
  }
  return ans;
}

int main(){
  
  return 0;
}