// Tabulatioin --> Bottom up 
// Memorization -->  Top Down

//Fibonacii number 

#include<bits/stdc++.h>
using namespace std;
int fibo(int n,vector<int>& dp){
  if(n<=1) return n;
  if(dp[n]!=-1) return dp[n];
  else dp[n]=fibo(n-1,dp)+fibo(n-2,dp);
  return dp[n];
}
int tabular(int n,vector<int>& dp){
  if(n<=1) return n;
  dp[0]=0;
  dp[1]=1;
  for(int i=2;i<n+1;i++){
    dp[i]=dp[i-1]+dp[i-2];
  }
  return dp[n];
}

int newhelper(int n){
  if(n<=1) return n;
  int prevprev=0;
  int prev=1;
  int ans=prevprev+prev;
  for(int i=2;i<=n;i++){
    ans=prevprev+prev;
    prevprev=prev;
    prev=ans;
  }
  return ans;
}

int main(){
  cout<<"Enter a number: ";
  int n;
  cin>>n;
  if(n<=1) {
    cout<<n;
    return 0;
  }
  vector<int> dp(n+1,-1);
  // int ans=fibo(n,dp);
  // int ans=tabular(n,dp);
  int ans=newhelper(n);
  cout<<ans;
  return 0;
}