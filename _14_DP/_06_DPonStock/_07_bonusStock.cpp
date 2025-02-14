#include<bits/stdc++.h>
using namespace std;
int md=-(int)1e9;
int helper(vector<int> buyingPrices,vector<int> sellingPrices,int i,int n,int amount){
  if(amount<0) return md;
  if(i==n) return 0;
  int profit=sellingPrices[i]-buyingPrices[i];
  int take=profit>=0 ? profit+helper(buyingPrices,sellingPrices,i+1,n,amount-buyingPrices[i]) : md;
  int notTake=helper(buyingPrices,sellingPrices,i+1,n,amount);
  return max(take,notTake);
}
int main(){
  vector<int> buyingPrices={12,3,5,7};
  vector<int> sellingPrices={13,4,6,8};
  int n=buyingPrices.size();
  int amount=20;
  int ans=helper(buyingPrices,sellingPrices,0,n,amount);
  cout<<ans<<endl;
  return 0;
}