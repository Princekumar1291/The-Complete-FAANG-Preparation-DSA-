#include <bits/stdc++.h>
using namespace std;

int maxSubArraySum(vector<int> v){
  int n=v.size();
  int maxSum=0;
  int sum=0;
  for(int i=0;i<n;i++){
    sum=0;
    for(int j=i;j<n;j++){
      sum+=v[j];
      maxSum=max(maxSum,sum);
    }
  }
  return maxSum;
}

int maxSubArraySumOpt(vector<int> v){ //O(n)
  int n=v.size();
  int maxSum=INT_MIN;
  int sum=0;
  for(int i=0;i<n;i++){
    if(sum<0) sum=0;
    sum+=v[i];
    maxSum=max(sum,maxSum);
  }
  return maxSum;
}

int maxSubArraySumOptPrint(vector<int> v){ //O(n)
  int n=v.size();
  int maxSum=INT_MIN;
  int sum=0;
  int t=0;
  int p=0,q=0;
  for(int i=0;i<n;i++){
    if(sum<0) {
      t=i;
      sum=0;
    }
    sum+=v[i];
    if(sum>maxSum){
      p=t;
      q=i;
      maxSum=sum;
    }
  }
  cout<<p<<" "<<q<<endl;
  return maxSum;
}


int main(){
  vector<int> v = {-2,-3,4,-1,-2,1,5,-3,-9,-90};
  int maxSum=maxSubArraySumOptPrint(v);
  cout<<maxSum;
  return 0;
}