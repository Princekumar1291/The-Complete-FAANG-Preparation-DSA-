// Problem Link: https://www.geeksforgeeks.org/problems/count-total-set-bits-1587115620/1



#include<bits/stdc++.h>
using namespace std;

int helper(int n){
  int ans=0;
  n=n>>1;
  while(n>0){
      ans++;
      n=n>>1;
  }
  return ans;
}
int countSetBits(int n){
  if(n==0) return 0;
  int k=helper(n);
  int ans=(k*pow(2,k-1))+(n-pow(2,k)+1)+countSetBits(n-pow(2,k));
  return ans;
}

int main(){
  
  return 0;
}