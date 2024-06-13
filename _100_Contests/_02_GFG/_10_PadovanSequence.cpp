// Problem Link: https://www.geeksforgeeks.org/problems/padovan-sequence2855/1




#include<bits/stdc++.h>
using namespace std;

int mod = 1000000007;
int padovanSequence(int n) {
  if(n <= 2)
      return 1;

  int dp[n+1];
  dp[0] = dp[1] = dp[2] = 1;

  for(int i = 3; i <= n; i++) {
      dp[i] = (dp[i-2] % mod + dp[i-3] % mod) % mod;
  }
  return dp[n];
}


int main(){
  
  return 0;
}