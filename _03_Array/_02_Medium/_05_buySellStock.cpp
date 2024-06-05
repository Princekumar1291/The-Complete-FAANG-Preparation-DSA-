#include <bits/stdc++.h>
using namespace std;

int maxProfitBrut(vector<int> v){
  int n=v.size();
  int mxProfit=0;
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      mxProfit=max(v[j]-v[i],mxProfit);
    }
  }
  return mxProfit;
}

int maxProfit(vector<int> &prices){
  int n = prices.size();
  int minVal = prices[0];
  int mxProfit = 0;
  for (int i = 0; i < n; i++){
    int profit = prices[i] - minVal;
    if (mxProfit < profit) mxProfit = profit; 
    minVal = min(minVal, prices[i]);
  }
  return mxProfit;
}

int main(){
  vector<int> v = {7,1,5,3,6,4};
  int maxSum=maxProfitBrut(v);
  cout<<maxSum;
  return 0;
}