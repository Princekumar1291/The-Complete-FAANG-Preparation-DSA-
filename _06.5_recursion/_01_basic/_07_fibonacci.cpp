#include<bits/stdc++.h>
using namespace std;
int fibo(int n){  //O(2powN)
  if(n==1) return 1;
  if(n==2) return 1;
  return fibo(n-1)+fibo(n-2);
}
void fiboPrint(int n,vector<int>& dp){
  for(int i=2;i<n;i++){
    dp[i]=dp[i-1]+dp[i-2];
  }
}
void print(vector<int>& v){
  for(int ele:v)cout<<ele<<" ";cout<<endl;
}
int main(){
  int n=10;
  int ans=fibo(9);
  cout<<ans<<endl;

  vector<int> dp(n,0);
  dp[0]=1;
  dp[1]=1;
  fiboPrint(n,dp);
  print(dp);
  return 0;
}